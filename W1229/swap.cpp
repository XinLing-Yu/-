#include"swap.h" //�Զ���ͷ�ļ�˫�źű�ʾ

void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
