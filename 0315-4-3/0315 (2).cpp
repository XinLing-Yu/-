#include<iostream>
using namespace std;
inline int v(int a);
int main()
{
	int a,v1;
	cout<<"输入立方体的边长：";
	cin>>a;
	v1=v(a);
	cout<<"立方体的体积为："<<v1<<endl;
	return 0;
}
inline int v(int a)
{
	int x;
	x=a*a*a;
	return x;
}