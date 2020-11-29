#include<iostream>
using namespace std;
int main()
{
	int num, n=0;
	cin >> num;
	while (num)
	{
		num /= 10;
		n++; 
	}
	cout << n << endl;
	return 0;
}
