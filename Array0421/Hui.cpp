#include<iostream>
using namespace std;
int main()
{
	int i,j,n,a[100][100]={0};
	cin>>n;
	for(i=0;i<(n+1)/2;i++)
	{
		for(j=i;j<n-i;j++)
		{
			a[i][j]=i+1;
		}
		for(j=i;j<n-i;j++)
		{
			a[j][n-i-1]=i+1;
		}
		for(j=i;j<n-i;j++)
		{
			a[n-i-1][j]=i+1;
		}
		for(j=i;j<n-i;j++)
		{
			a[j][i]=i+1;
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}