#include<iostream>
using namespace std;
int fac(int a,int b,int c)
{
	int t1=1,t2=1,t3=1;
	for(int i=1;i<=a;i++)
	{
		t1=i*t1;
	}
	for(int j=1;j<=b;j++)
	{
		t2=j*t2;
	}
	for(int k=1;k<=c;k++)
	{
		t3=k*t3;
	}
	return t1+t2+t3;
}
int main()
{
	int a,b,c,s;
	cout<<"��������������";
	cin>>a>>b>>c;
	s=fac(a,b,c);
	cout<<"���Ϊ��"<<s<<endl;
	return 0;
}