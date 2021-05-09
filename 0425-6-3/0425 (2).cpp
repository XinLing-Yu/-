#include<iostream>
using namespace std;
void iArray(int a[])
{
	for(int i=0;i<10;i++)
		cin>>a[i];
}
void reMin(int a[])
{
	int k,p;
	for(int i=0;i<10;i++)
	{
		k=i;
		for(int j=i+1;j<10;j++)
		{
			
			if(a[j]<a[i])
			{
				k=j;
			}
		}
		swap(a[0],a[k]);
	}
	for(i=0;i<10;i++)
	{
		
		for(int j=i+1;j<10;j++)
		{
			p=i;
			if(a[j]>a[i])
			{
				p=j;
			}
		}
		swap(a[9],a[p]);
	}
}
void oArray(int a[])
{
	for(int i=0;i<10;i++)
		cout<<a[i]<<' ';
	cout<<endl;
}
int main()
{
	int a[10];
	iArray(a);
	reMin(a);
	oArray(a);
	return 0;
}