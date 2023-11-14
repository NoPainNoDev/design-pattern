#pragma once
class Monster
{
public:
	virtual ~Monster() {}
	virtual Monster* Clone() = 0;

	// ±× ¿Ü...
};

class Ghost 
	: public Monster
{
public:
	Ghost(int health, int speed)
		: _health(health),
		_speed(speed)
	{}
	virtual Monster* Clone() { return new Ghost(_health, _speed); }
private:
	int _health;
	int _speed;
};
