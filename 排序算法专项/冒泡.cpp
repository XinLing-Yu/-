#include<iostream>
using namespace std;
int main()
{
	int a[6];
	int N=6;
	int temp;
	//int n=sizeof(a[6]/sizeof(int));
	for(int i=0;i<N;i++)
		cin>>a[i];
	for(int j=0;j<N;j++)
	{
		for(int k=0;k<=N-1-j;k++)
		{
			if(a[k]>a[k+1])
			{
				temp=a[k];
				a[k]=a[k+1];
				a[k+1]=temp;
			}
		}
	}
	for(i=0;i<N;i++)
		cout<<a[i]<<" ";
	return 0;
}