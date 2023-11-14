#pragma once
#include "Terrain.h"

#define WIDTH 100
#define HEIGHT 100

const Texture GRASS_TEXTURE;
const Texture HILL_TEXTURE;
const Texture RIVER_TEXTURE;

class World
{
public:
	World()
		: _grassTerrain(1, false, GRASS_TEXTURE),
		  _hillTerrain(3, false, HILL_TEXTURE),
		  _riverTerrain(2, true, RIVER_TEXTURE)
	{

	}
	~World();
public:
	void GenerateTerrain();
	const Terrain& GetTile(int x, int y) const
	{
		return *_tiles[x][y];
	}

private:
	Terrain* _tiles[WIDTH][HEIGHT];
	
	Terrain _grassTerrain;
	Terrain _hillTerrain;
	Terrain _riverTerrain;
};

