#include<iostream>
using namespace std;
void a(char *ch, int n)
{
	*ch += n;
}
int main()
{
	char ch,*p;
	int n;
	cout << "�����ַ���";
	cin>>ch;
	cout << "��Ϊ����n����";
	cin >> n;
	p = &ch;
	a(p,n);
	cout << "����" << n << "���ַ�Ϊ��" << ch << endl;
	return 0;
}