#include<iostream>
using namespace std;
class A
{
public:
	A()
	{
		a=0;
		b=0;
	}
	A(int m,int n)
	{
		a=m;
		b=n;
	}
	void print()
	{
		cout<<a<<","<<b<<endl;
	}
	void copy(A &aa)
	{
		if(this==&aa)
			return;
		else
			*this=aa;
	}
private:
	int a,b;
};

int main()
{
	A a1,a2(1,2);
	a1.print();
	a1.copy(a2);
	a1.print();
	return 0;
}