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
	cout << posX << "���� ";
	posX = x;
	cout << posX << "�� �̵��Ͽ���.";
	
	cout << posY << "���� ";
	posY = y;
	cout << posY << "�� �̵��Ͽ���." << endl;
}
