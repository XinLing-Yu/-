#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    if(a==b)
        return a;
    if(a>b)
        return gcd(a-b,b);
    else
        return gcd(b-a,a); 
}
int main()
{
	int a,b,x;
	cout<<"输入两个数：";
	cin>>a>>b;
	x=gcd(a,b);
	cout<<x<<endl;
	return 0;
}