#include<iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	//����ָ�룺ָ��ɸģ�ָ���ֵ���ɸ�
	const int* p = &a;
	//*p=20 Err
	//ָ�볣����ָ���ֵ�ɸģ�ָ�򲻿ɸ�
	int* const p2 = &a;
	//p2 = &b Err
	//��ָ�볣����ָ���ָ���ֵ�����ɸ�
	const int* const p3 = &a;
	//p2 = &b Err
	//*p = 20 Err
	return 0;
}