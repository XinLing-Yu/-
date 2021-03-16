#include<iostream>
using namespace std;
int d(int a,int b)
{
	return b-a;
}
float d(float a,float b)
{
	return b-a;
}
int main()
{
	int n1,n2;
	float f1,f2;
	cout<<"输入两个整数：";
	cin>>n1>>n2;
	cout<<"输入两个浮点数：";
	cin>>f1>>f2;
	cout<<"两整数点的距离为："<<d(n1,n2)<<endl;
	cout<<"两浮点数点的距离为："<<d(f1,f2)<<endl;
	return 0;
}
