#include<iostream>
using namespace std;
//ȫ�ֱ���
int g_a = 10;
int g_b = 10;
//const���ε�ȫ�ֳ���
const int c_g_a = 10;
const int c_g_b = 10;
int main()
{
	//ȫ����

	//������ͨ�ֲ�����
	int a = 10;
	int b = 10;
	//��̬����
	static int s_a = 10;
	static int s_b = 10;
	cout << "a�ĵ�ַΪ��" << int(&a) << endl;
	cout << "b�ĵ�ַΪ��" << int(&b) << endl;
	cout << "g_a�ĵ�ַΪ��" << int(&g_a) << endl;
	cout << "g_b�ĵ�ַΪ��" << int(&g_b) << endl;
	cout << "��̬����s_a�ĵ�ַΪ��" << int(&s_a) << endl;
	cout << "��̬����s_b�ĵ�ַΪ��" << int(&s_b) << endl;
	//�ַ�������
	cout << "�ַ���������ַΪ��" << int(&"Hello World C++") << endl;
	cout << "const���ε�c_g_a�ĵ�ַΪ��" << int(&c_g_a) << endl;
	cout << "const���ε�c_g_b�ĵ�ַΪ��" << int(&c_g_b) << endl;
	//const���εľֲ�����
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "const���ε�c_l_a�ĵ�ַΪ��" << int(&c_l_a) << endl;
	cout << "const���ε�c_l_a�ĵ�ַΪ��" << int(&c_l_a) << endl;
	system("pause");
	return 0;
}