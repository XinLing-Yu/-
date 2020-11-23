#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,temp;
	cin>>a>>b>>c>>d;
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	if(b>c)
	{
		temp=b;
		b=c;
		c=temp;
	}
	if(c>d)
	{
		temp=c;
		c=d;
		d=temp;		
	}
	if(a>d)
	{
		temp=a;
		a=d;
		d=temp;
	}
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	if(b>c)
	{
		temp=b;
		b=c;
		c=temp;
	}
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	return 0;
}
