#include<iostream>
using namespace std;
int c(int n, int k)
{
	int sum = 0, i, j;
	int temp = 1;
	for (i = 1; i <= n; i++) 
	{
		temp = 1;
		for (j = 1; j <= k; j++)
			temp *= i;
		sum += temp;
	}
	return sum;
}
int main() 
{
	int n, k, sum = 0;
	cin>>n>>k;
	sum = c(n, k);
	cout << sum << endl;
	return 0;
}