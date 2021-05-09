#pragma once
#include<vector>
using namespace std;
/*
max heap
author：whether
*/

class MaxHeap
{
private:
	std::vector<int> data;  //需要扩展，但是vector[0]项不存在
	void _make_max_top();

public:
	int get_count();
	void make_max_heap(int *a, int size);
	void push_heap(int a);
	int pop_heap();
};

