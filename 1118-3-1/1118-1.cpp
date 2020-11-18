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
	cout<<"圆周长为："<<c<<endl;
	cout<<"圆面积为："<<s<<endl;
	cout<<"圆球表面积为："<<ms<<endl;
	cout<<"圆球体积为："<<qv<<endl;
	cout<<"圆柱体积为："<<zv<<endl;
	return 0;
}
