//ֵ����
#include<iostream>
using namespace std;
void swap(int n1, int n2)
{
	int t;
	t = n1;
	n1 = n2;
	n2 = t;
	return;
}
//�βθı䣬��Ӱ��ʵ��
int main()
{
	int n1 = 10, n2 = 20;
	swap(n1, n2);
	cout << n1 << " " << n2;
}