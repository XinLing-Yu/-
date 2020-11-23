#include<iostream>
using namespace std;
int main()
{
	int a,b,c,temp;
	cin>>a>>b>>c;
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
	if(a>c)
	{
		temp=a;
		c=a;
		a=temp;
		
	}
	cout<<c<<endl;
	return 0;
}
