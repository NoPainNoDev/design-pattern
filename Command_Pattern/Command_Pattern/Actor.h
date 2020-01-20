#pragma once
class Actor
{
public:
	Actor();
	~Actor();

public:
	int X() { return posX; }
	int Y() { return posY; }

public:
	void jump();
	void fire();
	void swap();
	void lurch();
	void moveTo(int x, int y);

private:
	int posX = 0;
	int posY = 0;
};

