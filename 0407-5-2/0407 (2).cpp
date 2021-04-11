#include<iostream>
using namespace std;
int main()
{
    int n=0,a[100],b[100];
	for (int i = 0; i < 100; i++)
	{
		a[i]=i+1;
	}
	for (i = 1; i < 100; i++)
	{ 
		for (int j = 2; j < i; j++)
		{
			if (i%j==0)
			{
				break;
			}
			if(j==i-1)
			{
				b[n]=i;
				n++;
			}
		}
	}
	cout<<"ËØÊýÓÐ£º";
	for (i = 0; i < n; i++)
	{
		cout<<b[i]<<" ";
	}
	return 0;
}
