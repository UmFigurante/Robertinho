#pragma once
#include <iostream>
#include <vector>
#include <thread>

typedef void(*StackableFunction)(void* arg);
typedef struct { StackableFunction func; void* arg; bool used; } StackMember;

class BufferedStack
{
private:

	int delayPerExecution;
	std::vector<StackMember> functions;

public:

	
	void addToStack(StackableFunction func, void* arg);

	void executeStack();

};


