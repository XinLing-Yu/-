#include <iostream>
using namespace std;
int main()
{
	int a[100], b[100], c[100];
	int max2, max1, j = 0, k = 0, t;
	float avg, s = 0;
	cout << "������һ������(0����) �� ";
	int i = 0;
	do {
		cin >> a[i];
		s += a[i];
		i++;
	} while (a[i - 1]);
	t = i - 1;
	cout << "������" << t << "������! " << endl;
	for (i = 0; i <= t; i++)
		if (a[i] > 0) j++;
		else if (a[i] < 0) k++;
	avg = s / t;
	cout << "��������ƽ��ֵΪ" << avg << endl;
	cout << "�������������������Ϊ�� " << j << endl;
	cout << "��������ĸ���������Ϊ�� " << k << endl;
}
