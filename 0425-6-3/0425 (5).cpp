#include<iostream>
using namespace std;
void anti(int a[],int n)
{
	int *p,*i,*j;
	i=a;
	j=a+n-1;
	p=a+(n-1)/2;
	for(;i<=p;++i,--j)
	{
		swap(*i,*j);
	}
}
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
		cin>>a[i];
	anti(a,10);
	for(i=0;i<10;i++)
		cout<<a[i]<<' ';
	cout<<endl;
	return 0;
}