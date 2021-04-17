#include<iostream>
#include<iomanip>
using namespace std;
#define N 10
int main()
{
	int i,j,k,s,n;
	int a[N][N];
	cout<<"n*n¾ØÕó£º";
	cin>>n;
	k=1;s=0;i=0;
	while (k<=n*n)
	{
		for(j=s;j<n-s;j++)
		{
			a[i][j]=k++;
		}
		j--;
		for(i=s+1;i<n-s;i++)
		{
			a[i][j]=k++;
		}
		i--;
		for(j=n-s-2;j>=s;j--)
		{
			a[i][j]=k++;
		}
		j++;
		for(i=n-s-2;i>=s+1;i--)
		{
			a[i][j]=k++;
		}
		i++;
		s++;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<setw(4)<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
