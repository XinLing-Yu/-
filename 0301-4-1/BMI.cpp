#include<iostream>
using namespace std;
double getBMI(double h,int w)
{
	double bmi;
	bmi=w/(h*h);
	return bmi;
}
int main()
{
	double h,w,b;
	cout<<"��������ߺ����أ�";
	cin>>h>>w;
	b=getBMI(h,w);
	cout<<"BMI="<<b<<endl;
	return 0;
}