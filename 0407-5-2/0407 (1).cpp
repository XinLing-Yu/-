#include<iostream>
using namespace std;
int main()
{
	int N=10;
	int a[10];
	for(int i=0;i<=N-1;i++)
	{
		cin>>a[i];
	}
	cout<<"ÅÅÐòÇ°£º";
	for (i = 0; i <= N - 1; i++)
		cout << a[i] << " ";
	cout << endl;
	int k=0,min=a[0];
	for(int j=0;j<=N-2;j++)
	{
		min=a[j];
		k=j;
		for(i=j+1;i<=N-1;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
				k=i;
			}
		}
		swap(a[j],a[k]);
	}
	cout<<"ÅÅÐòºó£º";
	for (i = 0; i <= N - 1; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}