#include <iostream>
using namespace std;
int getMax(int n1 , int n2) 
{
	int i;
	for (i = n1; i > 1; i--) 
	{
		if (n1 % i == 0 && n2 % i == 0)
			break;
	}
	return i;
}

int getMin(int n1, int n2) 
{
	int i;
	for (i = n1; i < n1 * n2; i++) 
	{
		if (i % n1 == 0 && i % n2 == 0)
			break;
	}
	return i;
}

int main()
{
	int n1, n2;
	cout << "请输入两个数字：" << endl;
	cin >> n1>>n2;
	cout << "最大公约数为：" << getMax(n1, n2) << endl;
	cout << "最小公倍数为：" << getMin(n1, n2) << endl;
	return 0;
}
