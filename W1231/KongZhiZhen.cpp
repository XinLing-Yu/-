#include<iostream>
using namespace std;
int main()
{
	//空指针用于给指针变量初始化
	//空指针不可访问
	int* p=NULL;
	//0~255之间的内存编号为系统占用，不可访问
	cout << *p;
	return 0;
}