#include<iostream>
#include<cmath>
using namespace std;
int prime(int n)
{
	if(n==1)
		return 0;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
		else
			return 1;
	}
			
}
int main()
{
	int a,x;
	cout<<"请输入一个数：";
	cin>>a;
	x=prime(a);
	if(x==0)
		cout<<"不是素数！"<<endl;
	else
		cout<<"是素数！"<<endl;
	return 0;

}