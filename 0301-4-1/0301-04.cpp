#include <iostream>
using namespace std;
int runnian(int year)
{
	if (year % 100 != 0 && year % 4 == 0 || year % 100 == 0 && year % 400 != 0)
		return 1;
	else 
		return 0;
}
int main()
{
	int a;
	cout << "����һ����ݣ�";
	cin >> a;
	if (runnian(a) == 1)
	{
		cout << "������" << endl;
	}
	else
		cout << "�������꣡" << endl;
	return 0;
}