#include<iostream>
using namespace std;
//栈区注意：
//栈区的数据由编译器开辟管理和释放，不要返回局部变量的地址！
int * func()
{
	int a = 10; //局部变量,栈区的数据在函数执行后自动释放
	return &a;   //返回地址
}
int main()
{
	int * p = func();//接收返回值
	cout << *p << endl; //第一次做保留
	cout << *p << endl; //第二次不保留
	system("pause");
	return 0;
}