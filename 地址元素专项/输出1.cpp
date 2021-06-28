#include<iostream>
using namespace std;
int main()
{
	int a[5]={0,2,4,6,8};
	int *p;
	for(p=a;p<a+5;p++)
		cout<<*p<<' ';
	return 0;
}