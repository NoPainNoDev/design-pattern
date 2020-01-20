#pragma once
#include "Actor.h"

class Command
{
public:
	Command();
	virtual ~Command();
#ifdef NORMAL
	virtual void execute(Actor& a) = 0;
#endif
#ifdef UNDO
	virtual void execute() = 0;
	virtual void undo() = 0;
#endif
};

#ifdef NORMAL
class JumpCommand : public Command
{
public:
	virtual void execute(Actor& a) { a.jump(); }
};

class FireCommand : public Command
{
public:
	virtual void execute(Actor& a) { a.fire(); }
};

class SwapCommand : public Command
{
public:
	virtual void execute(Actor& a) { a.swap(); }
};

class LurchCommand : public Command
{
public:
	virtual void execute(Actor& a) { a.lurch(); }
};
#endif

// 이전과는 다르게 추상화가 아닌 바인드를 하였음
class MoveActorCommand : public Command
{
public:
	MoveActorCommand(Actor* actor, int x, int y)
		:_actor(actor),
		_x(x),
		_y(y)
	{

	}
	virtual void execute()
	{
		// 나중에 이동을 취소할 수 있도록 원래 유닛 위치를 저장한다.
		_BeforeX = _actor->X();
		_BeforeY = _actor->Y();
		_actor->moveTo(_x, _y);
	}
	virtual void undo()
	{
		_actor->moveTo(_BeforeX, _BeforeY);
	}
private:
	Actor* _actor;
	int _x;
	int _y;
	int _BeforeX = 0;
	int _BeforeY = 0;
};