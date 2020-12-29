#include<iostream>
using namespace std;
int add(int n1, int n2)
{
	int sum;
	sum = n1 + n2;
	return sum;
}
int main()
{
	int a, b,c;
	cin >> a >> b;
	c = add(a, b);
	cout << "sum = " << c;
	system("pause");
	return 0;
}