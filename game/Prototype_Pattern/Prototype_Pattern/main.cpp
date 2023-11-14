
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
	// ���͸� ���� ��
	Monster* ghostPrototype = new Ghost(15, 3);
	// �װ��� �����ʿ��� �����Ѵ�.
	Spawner* ghostSpawner = new Spawner(ghostPrototype);
	ghostSpawner->SpawnMonster();

	// �̷� �����ε� �����ϴ�.
	// Spawner_Other* ghostPrototype_Other = new Spawner_Other(spawnGhost(15, 3));

	// ���ø��� ����Ͽ�����
	Spawner_Template* ghostSpawner = new SpawnerFor<Ghost>();
	ghostSpawner->SpawnMonster();
}