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
		// �� �� �ٸ� �̺�Ʈ�� ó���ϰ�...
		// heroIsOnBridge ���� ������Ʈ �Ѵ�.
	}
}
