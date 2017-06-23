#include "pch.h"
#include "ActionBuffer.h"


void BufferedStack::addToStack(StackableFunction func, void* arg)
{
	functions.push_back({ func, arg, false });
}

void BufferedStack::executeStack()
{
	for (StackMember sm : functions)
		if (!sm.used)
		{
			sm.func((void*)sm.arg);
			sm.used = true;
		}
			
}

