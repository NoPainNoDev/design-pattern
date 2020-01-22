#include "pch.h"
#include "Subject.h"
#include "Observer.h"
#include "Entity.h"

void Subject::notify(const Entity& entity, Event event)
{
	Observer* observer = _head;
	while (observer != nullptr)
	{
		observer->onNotify(entity, event);
		observer = observer->_next;
	}
}

void Subject::addObserver(Observer* observer)
{
	// 추가한다..
	observer->_next = _head;
	_head = observer;
}

void Subject::removeObserver(Observer* observer)
{
	// 제거한다..
	if (_head == observer)
	{
		_head = observer->_next;
		observer->_next = nullptr;
		return;
	}

	Observer* current = _head;
	while (current != nullptr)
	{
		if (current->_next == observer)
		{
			current->_next = observer->_next;
			observer->_next = nullptr;
			return;
		}

		current = current->_next;
	}
	
}
