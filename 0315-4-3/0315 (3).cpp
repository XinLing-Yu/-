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
	cout<<"��������������";
	cin>>n1>>n2;
	cout<<"����������������";
	cin>>f1>>f2;
	cout<<"��������ľ���Ϊ��"<<d(n1,n2)<<endl;
	cout<<"����������ľ���Ϊ��"<<d(f1,f2)<<endl;
	return 0;
}
