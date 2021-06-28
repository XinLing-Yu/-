#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i,j,n,a[100][100]={0},k=1;
	cin>>n;
	for(i=0;i<n/2;i++)
	{
		for(j=i;j<=n-(2*i+1);j++)//ÉÏÐÐ
		{
			a[i][j]=k++;
		}
		for(j=i+1;j<n-(2*i-1);j++)//¶Ô½Ç
		{
			a[j][n-i-1-j]=k++;
		}
		for(j=n-(2*i+1);j>=i+1;j--)
		{
			a[j][i]=k++;
		}
		
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