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
	cout << "�������������֣�" << endl;
	cin >> n1>>n2;
	cout << "���Լ��Ϊ��" << getMax(n1, n2) << endl;
	cout << "��С������Ϊ��" << getMin(n1, n2) << endl;
	return 0;
}
