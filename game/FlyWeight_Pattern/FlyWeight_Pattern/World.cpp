#include "pch.h"
#include "World.h"



World::~World()
{
}

void World::GenerateTerrain()
{
	// ���� Ǯ�� ä���.
	for (int x = 0; x < WIDTH; ++x)
	{
		for (int y = 0; y < HEIGHT; ++y)
		{
			// ����� �� �� ���´�.
			if (0 == rand() % 10)
				_tiles[x][y] = &_hillTerrain;
			else
				_tiles[x][y] = &_grassTerrain;
		}
	}

	// ���� �ϳ� ���´�.
	int x = rand() % WIDTH;
	for (int y = 0; y < HEIGHT; ++y)
		_tiles[x][y] = &_riverTerrain;
}
