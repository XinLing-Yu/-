#include<iostream>
using namespace std;
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "第2个元素为：" << arr[1] << endl;
	int* p = arr;   //arr就是数组的首地址
	p++; //指针后移
	cout << "指针访问的" << *p << endl;
	int* p2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *p2 << endl;
		p2++;
	}
	return 0;
}