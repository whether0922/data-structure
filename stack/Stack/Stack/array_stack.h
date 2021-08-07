#pragma once
/*用数组实现的栈*/

#define MaxSize 10

class Stack
{
private:
	int Data[MaxSize];
	int Top;
public:
	Stack();
	void Push(int elem);
	int Pop();
	bool Is_Full();
	bool Is_Empty();
};
