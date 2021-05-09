#include<iostream>
using namespace std;
void pNum(int a[],int n)
{
	for(int i=0;i<9;i++)
	{	
		if(n<a[i])
		{
			for(int j=9;j>=i;a[j]=a[j-1],j--);
			a[i]=n;
			break;
		}
		else if(n>a[8])
		{
			a[9]=n;
			break;
		}
	}
}
int main()
{
	int a[10]={0,1,3,4,5,6,7,8,9};
	int num;
	cout<<"输入要插入的数：";
	cin>>num;
	pNum(a,num);
	for(int i=0;i<10;i++)
	{
		cout<<a[i]<<' ';
	}
	cout<<endl;
	return 0;
}