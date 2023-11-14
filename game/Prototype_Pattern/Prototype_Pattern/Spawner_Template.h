#pragma once
#include "Monster.h"

class Spawner_Template
{
public:
	virtual ~Spawner_Template() {}
	virtual Monster* SpawnMonster() = 0;
};

template <class T>
class SpawnerFor : public Spawner_Template
{
public:
	virtual Monster* SpawnMonster() { return new T(); }
};
