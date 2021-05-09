#include<iostream>
using namespace std;
int main()
{
	int a[5]={0,1,2,3,4};
	int i,*p=a;
	for(i=0;i<5;i++)
	{
		cout<<*p<<" ";
		p++;
	}
	cout<<endl;
	return 0;
}