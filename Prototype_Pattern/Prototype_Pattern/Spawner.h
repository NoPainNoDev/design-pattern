#pragma once
#include "Monster.h"

class Spawner
{
public:
	Spawner(Monster* prototype)
	: _prototype(prototype)
	{ }
	Monster* SpawnMonster() { return _prototype->Clone(); }


private:
	Monster* _prototype;
};

