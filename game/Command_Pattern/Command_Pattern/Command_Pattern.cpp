// Command_Pattern.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>
#include "Actor.h"
#include "Command.h"
#include "Input.h"



int main()
{
	Input input;
	Actor actor;

	input.SetSelectedActor(&actor);

	while (1)
	{
		Command* inputCommand = input.HandleInput();
		if (nullptr == inputCommand)
			continue;

#ifdef NORMAL
		inputCommand->execute(actor);
#endif 

#ifdef UNDO
		inputCommand->execute();
		inputCommand->undo();
		Safe_Delete<Command>(inputCommand);
#endif
    }
}

