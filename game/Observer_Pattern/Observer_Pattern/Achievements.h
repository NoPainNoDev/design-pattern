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
		// ���� ������ ��� ������ ������� �Ѵ�.
	}
	bool _heroIsOnBridge;
};

