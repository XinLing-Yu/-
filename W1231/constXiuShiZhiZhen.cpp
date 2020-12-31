#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	//常量指针：指向可改，指向的值不可改
	const int* p = &a;
	//*p=20 Err
	//指针常量：指向的值可改，指向不可改
	int* const p2 = &a;
	//p2 = &b Err
	//又指针常量：指向和指向的值都不可改
	const int* const p3 = &a;
	//p2 = &b Err
	//*p = 20 Err
	return 0;
}