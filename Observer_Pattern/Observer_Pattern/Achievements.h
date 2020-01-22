#pragma once
#include "Observer.h"

class Achievements
	: public Observer
{
public:
	virtual void onNotify(const Entity& entity, Event event);

private:
	void unlock(Achievement achievement)
	{
		// 아직 업적이 잠겨 있으면 잠금해제 한다.
	}
	bool _heroIsOnBridge;
};

