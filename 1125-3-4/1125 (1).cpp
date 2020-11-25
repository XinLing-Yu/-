#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,temp;
	cin>>a>>b>>c>>d;
	if(a<b)
	{
		temp=b;
		b=a;
		a=temp;		
	}
	if(b<c)
	{
		temp=c;
		c=b;
		b=temp;
	}
	if(c<d)
	{
		temp=d;
		d=c;
		c=temp;
	}
	if(a<b)
	{
		temp=b;
		b=a;
		a=temp;		
	}
	if(b<c)
	{
		temp=c;
		c=b;
		b=temp;
	}
	if(a<b)
	{
		temp=b;
		b=a;
		a=temp;		
	}
	cout<<d<<endl;
	return 0;
} 

