#include<iostream>
using namespace std;
inline int v(int a);
int main()
{
	int a,v1;
	cout<<"����������ı߳���";
	cin>>a;
	v1=v(a);
	cout<<"����������Ϊ��"<<v1<<endl;
	return 0;
}
inline int v(int a)
{
	int x;
	x=a*a*a;
	return x;
}