#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	//����ָ�룺��������*ָ�������;
	int* p;
	//��¼����a�ĵ�ַ
	p = &a;//a��ȡַ��
	cout << p << endl;

	//ʹ�ã�ͨ�������õķ�ʽ�ҵ�ָ��ָ����ڴ�  *p
	*p = 1000;
	cout << a << endl;
	cout << *p << endl;//�����ÿɶ���д
	return 0;
}