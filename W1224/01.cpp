#include<iostream>
using namespace std;
int main()
{
	/*������ص㣺
	����һ���������ڴ�ռ���
	arr[0-n] 1��n+1��Ԫ��
	[]Ϊ�±꣬ÿ��Ԫ�ص���������Ҫ��ͬ*/
	
	/*1.�������� ������ [���鳤��]*/
	int arr[5];
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;
	//��������Ԫ��
	cout << arr[0] << endl;
	//2.�������� ������[���鳤��]={ֵ1,ֵ2...};
	int arr[5] = { 10,20,30,40,50 };
	//��ѭ�����
	int i;
	for ( i = 0; i <= 4; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
	system("pause");
}