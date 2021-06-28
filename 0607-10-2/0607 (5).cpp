#include<iostream>
using namespace std;
class fraction
{
public:
	fraction(int = 0, int = 1);
	int getabove();
	int getbelow();
	friend fraction operator+(fraction f1,int x);
	void display();
private:
	int above;
	int below;
	int gcd(int n, int m);
};
fraction operator+(fraction f1,int x)
{
	int n = f1.above + x * f1.below;
	int m = f1.below;
	return fraction(n, m);
}
fraction::fraction(int a, int b)
{
	int factor = gcd(a, b);
	this->above = (b > 0 ? 1 : -1) * a / factor;
	this->below = abs(b) / factor;
}
int fraction::getabove()
{
	return above;
}
int fraction::getbelow()
{
	return below;
}
int fraction::gcd(int n, int m)
{
	int n1 = abs(n);
	int n2 = abs(m);
	int gcd = 1;
	for (int i = 1; i <= n1 && i <= n2; i++)
	{
		if ((n1 % i == 0) && (n2 % i == 0))
			gcd = i;
	}
	return gcd;
}
void fraction::display()
{
	cout << above << "/" << below;
}

int main()
{
	fraction f1(3, 2);
	cout<<"f1=";
	f1.display();
	cout << endl;
	cout << "f1+2=";
	(f1+2).display();
	cout << endl;
	return 0;
}