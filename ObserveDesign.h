/*************************************************************************
	> File Name: ObserveDesign.h
	> Author: XXDK
	> Email: v.manstein@qq.com 
	> Created Time: Sat 03 Mar 2018 04:17:20 PM CST
 ************************************************************************/

#ifndef _OBSERVEDESIGN_H
#define _OBSERVEDESIGN_H

#include <map>
#include <list>
#include <iostream>
#include <string>

using namespace std;

typedef enum {
	Event_Invalid = 0,
	Event_Login = 1,
	Event_Logout = 2,
}EVENT_ID;

/**< events be observed */
class MyEvent {
public:
	EVENT_ID mEventId;
	unsigned int mUniqueIndex;

	MyEvent(EVENT_ID eventId, unsigned int uniqueIndex):
		mEventId(eventId),
		mUniqueIndex(uniqueIndex)
	{
		;	
	}

	bool operator == (const MyEvent & rhs) 
	{
		return mEventId == rhs.mEventId;
	}

	bool operator < (const MyEvent &rhs) const;
};

class LoginEvent: public MyEvent{
public:
	LoginEvent(EVENT_ID eventId, unsigned int uniqueIndex):
		MyEvent(eventId, uniqueIndex)
	{
		std::cout << "login event" << std::endl;
	}

};

class LogoutEvent: public MyEvent{
public:
	LogoutEvent(EVENT_ID eventId, unsigned int uniqueIndex):
		MyEvent(eventId, uniqueIndex)
	{
		std::cout << "logout event" << std::endl;
	}

};

class MyEntity;

class EventEngine {
public:
	void Attach(MyEvent pEvent, MyEntity * pEntity);
	void Detach(MyEvent pEvent);
	void DetachAll();
	void fire(MyEvent pEvent);
private:
	typedef std::list<MyEntity*> EventList; 
	typedef std::map<EVENT_ID, EventList> EventListMap;
	typedef EventList::iterator EventListIter;
	typedef EventListMap::iterator EventListMapIter;
	EventListMap m_map;
	static EventEngine *mInstance;
	EventEngine() {}
public:
	static EventEngine* getInstance()
	{
		if(mInstance == NULL) {
			mInstance = new EventEngine();
		}
		return mInstance;
	}
};

EventEngine* EventEngine::mInstance = NULL;

void fireEvent(MyEvent pEvent)
{
	EventEngine::getInstance()->fire(pEvent);
}


/**< observer */
class MyEntity{
public:
	MyEntity(int pId): mId(pId) {}
	virtual void CallBack() = 0;
	void subscribe(MyEvent pEvent) {
		EventEngine::getInstance()->Attach(pEvent, this);
	}

	void unSubscribe(MyEvent pEvent) {
		EventEngine::getInstance()->Detach(pEvent);
	}

	int getId() {return mId;}
private:
	int mId;
};

class Hero: public MyEntity{
public:
	Hero(int pId): MyEntity(pId) {}
	void CallBack()
	{
		cout << "Hero object capture event " << getId() << " CallBack func" << endl;
	}
};

class Monster: public MyEntity {
public:
	Monster(int pId): MyEntity(pId) {}
	void CallBack()
	{
		cout << "Monster object capture event" << getId() << " CallBack func" << endl;
	}
};



#endif // _OBSERVEDESIGN_H
