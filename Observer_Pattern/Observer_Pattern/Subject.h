#pragma once

const int MAX_OBSERVERS = 100;

class Observer;
class Entity;
class Subject
{
public:
	Subject():_head(nullptr){}
protected:
	void notify(const Entity& entity, Event event);
public:
	void addObserver(Observer* observer);
	void removeObserver(Observer* observer);
private:
	Observer* _head = nullptr;
	int _numObservers;
};

