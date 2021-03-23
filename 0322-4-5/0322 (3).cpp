#include <iostream>
using namespace std;
double p(int n, int x)
{
	if (n == 0)
		return 1;
	if (n == 1)
		return x;
	if (n >= 1)
		return ((2 * n - 1) * x - p((n - 1), x) - (n - 1) * p((n - 2), x)) / n;
}
int main(void)
{
	int x, n;
	double p(int n, int x);
	cout << "ÊäÈën,x£º";
	cin >> n >> x;
	cout << p(n, x)<<endl ;
	return 0;
}