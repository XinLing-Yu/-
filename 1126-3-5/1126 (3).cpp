#include<iostream>
using namespace std;
int main()
{
	int num0,num, i=2,n = 0,n0;
	cin >> num0;
	num = num0;
	while (num0)
	{
		num0 /= 10;
		n++;
	}
	n0 = num % 10;
	cout << n0 << endl;
	while (i<=n)
	{
		num = num / 10;
		cout << num%10 << endl;
		i++;
	}
	return 0;
}