#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a, b, c, x1 , x2 , s , x , delt;
	cin >> a >> b >> c;
	delt = b * b - 4 * a * c;
	if (delt > 0)
	{
		x1 = -b - sqrt(delt) / 2 * a;
		x2 = -b + sqrt(delt) / 2 * a;
		cout << "x1=" << x1 << "x2=" << x2 << endl;
	}
	else if (delt < 0)
	{
		x = -b / 2 * a;
		s = sqrt(-delt) / 2 * a;
		cout << "x1=" << x << "+" << s << "i" << endl;
		cout << "x2=" << x << "-" << s << "i" << endl;
	}
	else
	{
		x1 = -b / 2 * a;
		cout << "x=" << x1 << endl;
	}
	return 0;
}