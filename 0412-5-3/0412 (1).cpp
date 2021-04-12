#include<iostream>
using namespace std;
int main()
{
	int a[3][3],i,j;
	int sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"输入数组为："<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum+=a[i][j];
		}
	}
	cout<<endl;
	cout<<"求和结果为："<<sum<<endl;
	return 0;
}