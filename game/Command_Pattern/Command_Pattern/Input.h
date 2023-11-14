#pragma once
#include "Command.h"

class Input
{
public:
	Input();
	~Input();
public:
	Actor* GetSelectedActor() { return _SelActor; }
	void SetSelectedActor(Actor* actor) { _SelActor = actor; }
	Command* HandleInput();
private:
	bool IsPressed(char val);
private:
	Command* _ButtonX = nullptr;
	Command* _ButtonY = nullptr;
	Command* _ButtonA = nullptr;
	Command* _ButtonB = nullptr;

	// Key를 커스터마이징 할 수 있다.
	char _KeyVal = 0;
	char ButtonX = 'x';
	char ButtonY = 'y';
	char ButtonA = 'a';
	char ButtonB = 'b';

	Actor* _SelActor = nullptr;
};

