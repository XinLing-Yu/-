#include<iostream>
using namespace std;
//�ȽϺ���-�ȴ�С�����ؽϴ��ֵ
//��ǰ���߱������������ڣ������ú�������

int max(int a, int b);  //��������
//�ɶ�������������ܶ���һ��!
int main()
{
	int a = 10, b = 20;
	cout << max(a, b) << endl;
	return 0;
}
int max(int a, int b)
{
	return a > b ? a : b;
}