#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y;
	cout<<"函数为y=x^2+4x+5,请输入x的值：";
	cin>>x;
	y=pow(x,2)+4*x+5;
	cout<<"y="<<y<<endl;
	return 0;
	
}
