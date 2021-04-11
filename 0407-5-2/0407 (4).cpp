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
	for (int j = 0; j <= 9; j++)
	{
		for (int k = 0; k <= 9-j-1; k++)
		{
			if (a[k] < a[k + 1])
			{
				swap(a[k],a[k+1]);
			}
		}
	}
	cout<<"Ã°ÅÝÅÅÐòºó£º";
	for (i = 0; i <= N - 1; i++)
		cout << a[i] << " ";
	cout << endl;
	int k=0,max=a[0];
	for(j=0;j<=N-2;j++)
	{
		max=a[j];
		k=j;
		for(i=N-1;i>=j+1;i--)
		{
			if(a[i]>max)
			{
				max=a[i];
				k=i;
			}
		}
		swap(a[j],a[k]);
	}
	cout<<"Ñ¡ÔñÅÅÐòºó£º";
	for (i = 0; i <= N - 1; i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}