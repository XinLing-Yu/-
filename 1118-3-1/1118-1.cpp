#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double r,h,c,s,ms,qv,zv;
	cin>>r>>h;
	c=2*r*3.14;
	s=3.14*r*r;
	ms=4*3.14*r*r;
	qv=(3.14*r*r*r)*4/3;
	zv=3.14*r*r*h;
	cout<<fixed<<setprecision(2);
	cout<<"Բ�ܳ�Ϊ��"<<c<<endl;
	cout<<"Բ���Ϊ��"<<s<<endl;
	cout<<"Բ������Ϊ��"<<ms<<endl;
	cout<<"Բ�����Ϊ��"<<qv<<endl;
	cout<<"Բ�����Ϊ��"<<zv<<endl;
	return 0;
}
