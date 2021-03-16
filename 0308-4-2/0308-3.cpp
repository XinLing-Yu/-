#include<iostream>
using namespace std;
void print(int  a,int b)
{
	if(a<=b)
	{
		cout<<a<<" ";
		print(a+1,b-1);
		if(a<b)
			cout<<b<<" ";
	}
	
}
int main()
{
	print(5,10);
	return 0;
}