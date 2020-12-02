#include<iostream>
using namespace std;
int main()
{
	int i, t, n = 20;
	double a, b, s = 0;
	a = 2;
	b = 1;
	for ( i = 1; i <=n; i++)
	{
		s = s + a / b;
		t = a;
		a = a + b;
		b = t;
	}
	cout << s << endl;


	system("pause");
	return 0;
}