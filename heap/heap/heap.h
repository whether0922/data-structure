#pragma once
#include<vector>
using namespace std;
/*
max heap
author��whether
*/

class MaxHeap
{
private:
	std::vector<int> data;  //��Ҫ��չ������vector[0]�����
	void _make_max_top();

public:
	int get_count();
	void make_max_heap(int *a, int size);
	void push_heap(int a);
	int pop_heap();
};

