#include "pch.h"
#include "Actor.h"


Actor::Actor()
{
}


Actor::~Actor()
{
}

void Actor::jump()
{
	cout << "jump!" << endl;
}

void Actor::fire()
{
	cout << "fire!" << endl;
}

void Actor::swap()
{
	cout << "swap!" << endl;
}

void Actor::lurch()
{
	cout << "lurch!" << endl;
}

void Actor::moveTo(int x, int y)
{
	cout << posX << "에서 ";
	posX = x;
	cout << posX << "로 이동하였다.";
	
	cout << posY << "에서 ";
	posY = y;
	cout << posY << "로 이동하였다." << endl;
}
