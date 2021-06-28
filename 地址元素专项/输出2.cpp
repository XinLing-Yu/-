#include<iostream>
using namespace std;
int main()
{
	int a[5]={0,20,40,50,100};
	int i,*p=a;
	for(i=0;i<5;i++)
	{
		cout<<*p<<' ';
		p++;
	}
	return 0;
}