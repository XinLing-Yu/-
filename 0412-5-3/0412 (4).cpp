#include<iostream>
using namespace std;
int main()
{
	int a[5][5],i,j,b[5][5];
	cout<<"Ϊһ��5x5�Ķ�ά����������������:"<<endl;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"�����������Ϊ:"<<endl;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			b[j][i]=a[i][j];
		}
	}
	cout<<"�����������Ϊ:"<<endl;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"���°��������Ϊ:"<<endl;
	for(i=0;i<5;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}