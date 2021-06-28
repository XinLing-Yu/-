#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int N=10;
	for(int i=0;i<10;i++)
		cin>>a[i];
	cout<<"ÅÅÐòÇ°£º";
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	for(int j=0;j<=N-1;j++)
	{
		for(int k=0;k<=N-j-2;k++)
		{
			if(a[k]<a[k+1])
				swap(a[k],a[k+1]);
		}
	}
	cout<<"ÅÅÐòºó£º";
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}