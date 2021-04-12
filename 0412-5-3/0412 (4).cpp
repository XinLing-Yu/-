#include<iostream>
using namespace std;
int main()
{
	int a[5][5],i,j,b[5][5];
	cout<<"为一个5x5的二维整型数组输入数据:"<<endl;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"按行输出数组为:"<<endl;
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
	cout<<"按列输出数组为:"<<endl;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"左下半三角输出为:"<<endl;
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