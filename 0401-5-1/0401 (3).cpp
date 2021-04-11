#include <iostream>
using namespace std;
int main()
{
	int a[30], b[6], i = 0, j;
	while (i < 30)
		a[i++] = 2 * (i + 1);
	i = 0;
	while (i < 6)
	{
		j = i * 6;
		b[i] = a[j] + a[j + 1] + a[j + 2] + a[j + 3] + a[j + 4] + a[j + 5];
		b[i] /= 6;
		i++;
	}
	i = 0;
	while (i < 6)
		cout << b[i++];
	return 0;
}