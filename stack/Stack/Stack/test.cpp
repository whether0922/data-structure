#include "stdio.h"
#include "array_stack.h"

int main()
{
	Stack s;
	printf("is empty = %d \n", s.Is_Empty());
	s.Push(10);
	s.Push(9);
	s.Push(222);
	while (!s.Is_Empty())
	{
		int a = s.Pop();
		printf("pop %d \n", a);
	}
	return 0;
}