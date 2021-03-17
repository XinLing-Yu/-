#include<iostream>
#include<cmath>
using namespace std;
double d(int x1,int y1,int x2,int y2)
{
	double sdt;
	dst=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	return dst;
}
double d(double x1,double y1,double x2,double y2)
{
	double sdt;
	dst=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
	return dst;
}
int main()
{
	double x1,x2,y1,y2,result;
	cout<<"输入两点坐标：";
	cin>>x1>>y1>>x2>>y2;
	result=d(x1,y1,x2,y2);
	cout<<"两点的距离为："<<result<<endl;
	return 0;
}
