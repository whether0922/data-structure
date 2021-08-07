#include "stdio.h"
#include "string.h"
#include "array_stack.h"

Stack::Stack()
{
	Top = -1;
}

void Stack::Push(int elem)
{
	if (Top == MaxSize - 1)
	{
		printf("stack is Full!!");
		return;
	}
	else
	{
		Data[++Top] = elem;
	}
}

int Stack::Pop()
{
	if (Top == -1)
	{
		printf("stack is Full!!");
		return NULL;
	}
	else
	{
		return Data[Top--];
	}
}

bool Stack::Is_Full()
{
	return Top == MaxSize - 1;
}

bool Stack::Is_Empty()
{
	return Top == -1;
}