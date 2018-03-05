/*************************************************************************
	> File Name: ObserveDesign.cpp
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Sat 03 Mar 2018 05:00:17 PM CST
 ************************************************************************/
#include "ObserveDesign.h"
#include <cstdlib>
#include <unistd.h>


bool MyEvent::operator < (const MyEvent & rhs) const 
{
	return mEventId < rhs.mEventId;
}

void EventEngine::Attach(MyEvent pEvent, MyEntity* pEntity)
{
	EventListMap::iterator iter = m_map.find(pEvent.mEventId);
	if(iter == m_map.end()) {
		std::list<MyEntity*> entityList;
		entityList.push_front(pEntity);
		m_map.insert(EventListMap::value_type(pEvent.mEventId, entityList));
	} else {
		(iter->second).push_front(pEntity);
	}
}

void EventEngine::Detach(MyEvent pEvent)
{
	if(m_map.empty()) 
		return ;

	EventListMap::iterator mIter = m_map.find(pEvent.mEventId);
	if(mIter != m_map.end()) {
		EventListIter lIter = (mIter->second).begin();
		for(; lIter != (mIter->second).end(); ++lIter) {
			if((*lIter)->getId() == pEvent.mUniqueIndex) {
				(mIter->second).erase(lIter);
				return ;
			}
		}
	}
}

void EventEngine::DetachAll()
{
	EventListMapIter mIter = m_map.begin();
	for(; mIter != m_map.end(); ++mIter) {
		mIter->second.clear();
	}
	m_map.clear();
}

void EventEngine::fire(MyEvent pEvent)
{
	EventListMapIter mIter = m_map.find(pEvent.mEventId);
	if(mIter == m_map.end())
		return ;

	EventListIter lIter = (mIter->second).begin();
	for(; lIter != (mIter->second).end(); ++lIter) {
		if((*lIter)->getId() == pEvent.mUniqueIndex) {
			(*lIter)->CallBack();
			return;
		}
	}
}

int main()
{
	Hero* h1 = new Hero(1);
	Hero* h2 = new Hero(2);

	Monster* m1 = new Monster(3);
	Monster* m2 = new Monster(4);
	
	std::cout << "1.----------------------------------------------------" << std::endl;
	std::cout << "Hero object h1: login event" << std::endl;
	LoginEvent l1(Event_Login, h1->getId());
	std::cout << "Hero object h2: logout event" << std::endl;
	LogoutEvent l2(Event_Logout, h2->getId());

	std::cout << "Monster object m1: login event" << std::endl;
	LoginEvent l3(Event_Login, m1->getId());
	std::cout << "Monster object m2: logout event" << std::endl;
	LogoutEvent l4(Event_Logout, m2->getId());

	std::cout << "2.----------------------------------------------------" << std::endl;
	std::cout << "Hero object h1: subscribe login event" << std::endl;
	h1->subscribe(l1); ///< h1 subscribe login event
	std::cout << "Hero object h1: subscribe logout event" << std::endl;
	h1->subscribe(l2); ///< h1 subscribe logOut event

	std::cout << "Monster object m1: subscribe login event" << std::endl;
	m1->subscribe(l3); ///< m1 subscribe login event
	std::cout << "Monster object m1: subscribe logout event" << std::endl;
	m1->subscribe(l4); ///< m1 subscribe logOut event

	std::cout << "3.----------------------------------------------------" << std::endl;
	std::cout << "fire h1 login event" << std::endl;
	fireEvent(l1);
	std::cout << "fire m2 logout event" << std::endl;
	fireEvent(l4);
	std::cout << "fire h2 logout event" << std::endl;
	fireEvent(l2);
	std::cout << "fire m3 login event" << std::endl;
	fireEvent(l3);

	sleep(2);

	return 0;
}
