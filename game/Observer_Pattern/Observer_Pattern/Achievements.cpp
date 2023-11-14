#include "pch.h"
#include "Achievements.h"
#include "Entity.h"

void Achievements::onNotify(const Entity& entity, Event event)
{
	switch (event)
	{
	case EVENT_ENTITY_FELL:
		if (entity.isHero() && _heroIsOnBridge)
		{
			unlock(ACHIEVEMENT_FELL_OFF_BRIDGE);
		}
		break;
		// 그 외 다른 이벤트를 처리하고...
		// heroIsOnBridge 값을 업데이트 한다.
	}
}
