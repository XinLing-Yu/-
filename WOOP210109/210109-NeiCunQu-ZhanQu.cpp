#include<iostream>
using namespace std;
//ջ��ע�⣺
//ջ���������ɱ��������ٹ�����ͷţ���Ҫ���ؾֲ������ĵ�ַ��
int * func()
{
	int a = 10; //�ֲ�����,ջ���������ں���ִ�к��Զ��ͷ�
	return &a;   //���ص�ַ
}
int main()
{
	int * p = func();//���շ���ֵ
	cout << *p << endl; //��һ��������
	cout << *p << endl; //�ڶ��β�����
	system("pause");
	return 0;
}