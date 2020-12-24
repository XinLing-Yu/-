#include<iostream>
using namespace std;
int main()
{
	/*数组的特点：
	放在一块连续的内存空间中
	arr[0-n] 1到n+1个元素
	[]为下标，每个元素的数据类型要相同*/
	
	/*1.数据类型 数组名 [数组长度]*/
	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	//访问数据元素
	cout << arr[0] << endl;
	//2.数据类型 数组名[数组长度]={值1,值2...};
	int arr[5] = { 10,20,30,40,50 };
	//用循环输出
	int i;
	for ( i = 0; i <= 4; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
	system("pause");
}