#include "pch.h"
#include "World.h"



World::~World()
{
}

void World::GenerateTerrain()
{
	// 땅에 풀을 채운다.
	for (int x = 0; x < WIDTH; ++x)
	{
		for (int y = 0; y < HEIGHT; ++y)
		{
			// 언덕을 몇 개 놓는다.
			if (0 == rand() % 10)
				_tiles[x][y] = &_hillTerrain;
			else
				_tiles[x][y] = &_grassTerrain;
		}
	}

	// 강을 하나 놓는다.
	int x = rand() % WIDTH;
	for (int y = 0; y < HEIGHT; ++y)
		_tiles[x][y] = &_riverTerrain;
}
