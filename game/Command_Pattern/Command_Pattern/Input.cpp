#include "pch.h"
#include "Input.h"


Input::Input()
{
#ifdef NORMAL
	_ButtonX = new JumpCommand;
	_ButtonY = new FireCommand;
	_ButtonA = new SwapCommand;
	_ButtonB = new LurchCommand;
#endif
}

Input::~Input()
{
	Safe_Delete<Command>(_ButtonA);
	Safe_Delete<Command>(_ButtonB);
	Safe_Delete<Command>(_ButtonX);
	Safe_Delete<Command>(_ButtonY);
}

Command* Input::HandleInput()
{
	_KeyVal = _getch();

#ifdef UNDO
	Actor* actor = GetSelectedActor();
	
	if (nullptr == actor) 
		return nullptr;

	if (IsPressed('u'))
	{
		int destY = actor->Y() + 1;
		return new MoveActorCommand(actor, actor->X(), destY);
	}
	else if (IsPressed('d'))
	{
		int destY = actor->Y() - 1;
		return new MoveActorCommand(actor, actor->X(), destY);
	}
	// 다른 이동들...
	return nullptr;
#endif

#ifdef NORMAL
	if (IsPressed(ButtonA)) return _ButtonA;
	else if (IsPressed(ButtonB)) return _ButtonB;
	else if (IsPressed(ButtonX)) return _ButtonX;
	else if (IsPressed(ButtonY)) return _ButtonY;

	return nullptr;
#endif
}

bool Input::IsPressed(char val)
{
	if (val == _KeyVal)
		return true;
	else
		return false;
}
