#include<iostream>
using namespace std;
int f( int n)
{
	if(n ==1)
		return 1;
	else
		return n+f(n-1);
}
int main()
{
	int x,n;
	cout<<"请输入一个数：";
	cin>>x;
	n=f(x);
	cout<<"f("<<x<<")="<<n*n<<endl;
	return 0;
}