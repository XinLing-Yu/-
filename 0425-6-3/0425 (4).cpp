#include<iostream>
using namespace std;
int main()
{
	void move(int *po);
	int a[3][3];
	int *p,i,j;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
	p=&a[0][0];
	move(p);
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<a[i][j]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
void move(int *po)
{
	int i,j,t;
	for(i=0;i<3;i++)
	{
		for(j=i;j<3;j++)
		{
			t=*(po+3*i+j);
			*(po+3*i+j)=*(po+3*j+i);
			*(po+3*j+i)=t;
		}
	}
}