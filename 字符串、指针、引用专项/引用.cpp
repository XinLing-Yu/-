#include<iostream>
using namespace std;
void swap(int &x,int &y)
{
	int t;
	t=x;x=y;y=t;
}
int main()
{
	int a=19;
	int b=20;
	cout<<a<<endl;
	cout<<b<<endl;
	swap(a,b);
	cout<<a<<endl;
	cout<<b<<endl;
	return 0;
}