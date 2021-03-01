#include<iostream>
using namespace std;
int f(int n) 
{
	int  j, k = 0;
	j = n;
	while (j > 0) 
	{
		k = k * 10 + j % 10;
		j /= 10;
	}
	if (k == n)
		return 1;
	else
		return 0;
}
int main() 
{
	for (int i = 101; i < 1000; i++)
	{
		if (f(i) == 1)
		{
			cout << i << endl;
		}
	}
	return 0;
}