#include "heap.h"

void MaxHeap::_make_max_top()
{
	for (int j = data.size() - 1; j >= 1; j--)
	{
		if (j / 2 <= 0)
			break;
		if (data[j] > data[j / 2])
		{
			swap(data[j], data[j / 2]);
		}
	}
}

int MaxHeap::get_count()
{
	int count = 0;
	count = data.size();
	if (count <= 0)
	{
		return 0;
	}
	return count - 1;
}

void MaxHeap::make_max_heap(int *a, int size)
{
	if (data.size() > 0)
	{
		// 重新生成一个堆
		data.clear();
	}
	// 堆的索引从1开始
	data.push_back(INT_MAX);
	for (int i = 0; i < size; i++)
	{
		data.push_back(a[i]);
	}
	// 生成大顶堆
	_make_max_top();
}

void MaxHeap::push_heap(int a)
{
	if (data.size() <= 0)
		data.push_back(INT_MAX);
	data.push_back(a);
	_make_max_top();
}

int MaxHeap::pop_heap()
{
	if (data.size() <= 1)
		return INT_MAX;
	vector<int>::iterator it = data.begin() + 1;
	int res = data[1];
	data.erase(it);
	_make_max_top();
	return res;
}

