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
	cout<<"��������Ϊ��"<<endl;
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
	cout<<"��ͽ��Ϊ��"<<sum<<endl;
	return 0;
}