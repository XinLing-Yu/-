#include<iostream>
using namespace std;
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "��2��Ԫ��Ϊ��" << arr[1] << endl;
	int* p = arr;   //arr����������׵�ַ
	p++; //ָ�����
	cout << "ָ����ʵ�" << *p << endl;
	int* p2 = arr;
	for (int i = 0; i < 10; i++)
	{
		cout << *p2 << endl;
		p2++;
	}
	return 0;
}