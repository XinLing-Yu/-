//һ�������ε��࣬����һ�������������캯�����߳�Ϊ0����һ���������ģ��ٶ���һ���������캯�����ڶ���һ����Ա�������������ε��������д������������в���
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