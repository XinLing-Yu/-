#include<iostream>
using namespace std;
int main()
{
	int a[5]={0,1,2,3,4};
	int i,*p;
	for(p=a;p<a+5;p++)
	{
		cout<<*p<<" ";
	}
	cout<<endl;
	return 0;
}