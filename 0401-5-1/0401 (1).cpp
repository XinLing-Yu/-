#include<iostream>
using namespace std;
int main()
{
	int numb[10], i = 0, max = 0, aMax = 0;
	for (i = 0; i < 10; i++)
	{
		cin >> numb[i];
	}
	for (i = 0; i < 10; i++)
	{
		if (numb[i] > max)
		{
			aMax = max;
			max = numb[i];
		}
		else if (numb[i] > aMax)
		{
			aMax = numb[i];
		}

	}
	cout << "���ֵ=" << max << endl;
	cout << "�δ�ֵ=" << aMax << endl;
	return 0;
}