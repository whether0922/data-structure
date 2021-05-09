#include<iostream>
#include "heap.h"
using namespace std;

int main()
{
	MaxHeap a;
	int x;
	int b[8] = { 35, 23, 10, 3,5,44,66,2 };
	// 验证heap长度
	a.make_max_heap(b, 8);
	cout << a.get_count() << endl;
	a.push_heap(100);
	cout << a.get_count() << endl;
	int length = a.get_count();
	while (length > 0)
	{
		x = a.pop_heap();
		cout << x << endl;
		length = a.get_count();
		cout << "now count = " << length << endl;
	}

	while (true);
	return 0;
}