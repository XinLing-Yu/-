#include <iostream>
using namespace std;
int runnian(int year)
{
	int x;
	if (year % 100 != 0 && year % 4 == 0 || year % 100 == 0 && year % 400 != 0)
		x = 1;
	else x = 0;
	return x;
}
int main()
{
	int a;
	cout << "输入一个年份：";
	cin >> a;
	if (runnian(a) == 1)
	{
		cout << "是闰年" << endl;
	}
	else
		cout << "不是闰年！" << endl;
	return 0;
}