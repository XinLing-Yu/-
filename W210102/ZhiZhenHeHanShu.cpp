#include<iostream>
using namespace std;
void swap01(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
}
void swap02(int* p, int* p2)
{
	int t;
	t = *p;
	*p = *p2;
	*p2 = t;
}
int main()
{
	//ָ��ͺ���
	//1��ֵ����
	/*int a = 10;
	int b = 20;
	swap(a, b);
	cout << a << " " << b << endl;
	*/
	cout << endl;
	//2����ַ����
	int a = 10;
	int b = 20;
	swap02(&a, &b);
	cout << &a << " " << &b << endl;
	cout << endl;
	return 0;
}