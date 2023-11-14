
#include <iostream>
using namespace std;

#include "Spawner.h"
#include "Spawner_Other.h"
#include "Spawner_Template.h"

Monster* spawnGhost(int health, int speed)
{
	return new Ghost(health, speed);
}

int main()
{
	// 몬스터를 만든 후
	Monster* ghostPrototype = new Ghost(15, 3);
	// 그것을 스포너에게 전달한다.
	Spawner* ghostSpawner = new Spawner(ghostPrototype);
	ghostSpawner->SpawnMonster();

	// 이런 식으로도 가능하다.
	// Spawner_Other* ghostPrototype_Other = new Spawner_Other(spawnGhost(15, 3));

	// 템플릿을 사용하였을때
	Spawner_Template* ghostSpawner = new SpawnerFor<Ghost>();
	ghostSpawner->SpawnMonster();
}