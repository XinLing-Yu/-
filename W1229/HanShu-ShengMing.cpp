#include<iostream>
using namespace std;
//比较函数-比大小，返回较大的值
//提前告诉编译器函数存在，可利用函数声明

int max(int a, int b);  //函数声明
//可多次声明，但是能定义一次!
int main()
{
	int a = 10, b = 20;
	cout << max(a, b) << endl;
	return 0;
}
int max(int a, int b)
{
	return a > b ? a : b;
}