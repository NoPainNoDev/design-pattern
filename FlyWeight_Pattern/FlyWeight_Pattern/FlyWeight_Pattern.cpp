// FlyWeight_Pattern.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include "World.h"
#include "Terrain.h"

int main()
{
	World world;
	world.GenerateTerrain();
	cout << world.GetTile(50, 50).getMovementCost() << endl;
}