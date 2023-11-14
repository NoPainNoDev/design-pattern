#pragma once
#include "Monster.h"

typedef Monster* (*SpawnCallback)();

class Spawner_Other
{
public:
	Spawner_Other(SpawnCallback spawn)
	: _spawn(spawn) {}
	Monster* SpawnMonster() { return _spawn(); }

private:
	SpawnCallback _spawn;
};

