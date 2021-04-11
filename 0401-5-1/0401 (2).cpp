#include <iostream>
using namespace std;
int main()
{
	int a[100], b[100], c[100];
	int max2, max1, j = 0, k = 0, t;
	float avg, s = 0;
	cout << "请输入一组整数(0结束) ： ";
	int i = 0;
	do {
		cin >> a[i];
		s += a[i];
		i++;
	} while (a[i - 1]);
	t = i - 1;
	cout << "共输入" << t << "个整数! " << endl;
	for (i = 0; i <= t; i++)
		if (a[i] > 0) j++;
		else if (a[i] < 0) k++;
	avg = s / t;
	cout << "这组数的平均值为" << avg << endl;
	cout << "其中输入的正整数个数为： " << j << endl;
	cout << "其中输入的负整数个数为： " << k << endl;
}
