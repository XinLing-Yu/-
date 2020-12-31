#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	//定义指针：数据类型*指针变量名;
	int* p;
	//记录变量a的地址
	p = &a;//a的取址符
	cout << p << endl;

	//使用：通过解引用的方式找到指针指向的内存  *p
	*p = 1000;
	cout << a << endl;
	cout << *p << endl;//解引用可读可写
	return 0;
}