#include<iostream>
using namespace std;
void sort(int a[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
}
int main()
{
	int n,a[100];
	cout<<"���������ָ���:";
	cin>>n;
	cout<<"����������:";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"����ǰ����:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
	sort(a,n);
	cout<<"���������:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0;
}