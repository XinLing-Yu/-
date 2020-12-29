//1.创建.h后缀名的头文件
//2.创建.cpp的源文件
//3.在头文件中写函数的声明
//4.在源文件中写函数的定义
#include<iostream>
using namespace std;
#include"swap.h"
int main()
{
	int a = 10;
	int b = 20;
	swap(a, b);
	return 0;
}