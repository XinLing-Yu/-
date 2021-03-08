#include<iostream>
using namespace std;
void print(int  n)
{
	if(n==1)
	{
		cout<<"1";
	}
	else if(n>1)
	{
		print(n-1);
		cout<<n;
	}
}
int main()
{
	int x;
	cin>>x;
	print(x);
	return 0;
}