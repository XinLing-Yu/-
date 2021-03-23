#include <iostream>
#include <cmath>
using namespace std;
double x, x1, x2;
double fx(double x)
{
	double c;
	c = x * x * x - 5 * x * x + 16 * x - 80;
	return c;
}

double root(double x1, double x2)
{
	do
	{
		double k, b;
		k = (fx(x1) - fx(x2)) / (x1 - x2);
		b = fx(x1) - k * x1;
		x = -b / k;
		if (fx(x) * fx(x1) >= 0)
			x1 = x;
		if (fx(x) * fx(x2) >= 0)
			x2 = x;
	} while (fx(x) < -0.00001 || fx(x) > 0.00001);
	return fx(x);
}

int main()
{
	while (fx(x1) * fx(x2) >= 0)
	{
		cout << "ÊäÈëx1ºÍx2£º";
		cin >> x1 >> x2;
	}
	root(x1, x2);
	cout << x << endl;
	return 0;
}
