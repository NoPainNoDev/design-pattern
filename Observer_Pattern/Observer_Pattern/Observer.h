#pragma once

class Entity;
class Observer
{
	friend class Subject;

public:
	Observer() : _next(nullptr) {}
	virtual ~Observer();
	virtual void onNotify(const Entity& entity, Event event) = 0;

private:
	Observer* _next = nullptr;
};

