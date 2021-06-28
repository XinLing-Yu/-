//一个正方形的类，定义一个不带参数构造函数（边长为0），一个带参数的，再定义一个拷贝构造函数，在定义一个成员函数计算正方形的面积，编写主函数对类进行测试
#include<iostream>
using namespace std;
class Z
{
public:
	Z()
	{
		a=0;
	}
	Z(int n)
	{
		a=n;
	}
	Z(Z &aa)
	{
		a=aa.a;
	}
	int area()
	{
		return a*a;
	}
	int get_a()
	{
		return a;
	}
	int a;
};

int main()
{
	
	Z x;
	
	cout<<x.area()<<endl;
	Z q(2);
	cout<<q.area()<<endl;
	Z v(q);
	cout<<v.area()<<endl;
	Z e(f(q));
	cout<<e.area()<<endl;
	system("pause");
	return 0;
}
Z f(Z& aa)
{
	int n = aa.get_a();
	aa.a = n + 5;
	return aa;
}