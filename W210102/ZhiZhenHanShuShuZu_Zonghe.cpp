#include<iostream>
using namespace std;
void bubble(int* arr, int length)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < length-i-1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tp;
			}
		}
	}
}

void printarr(int * arr, int length)
{

	for (int i = 0; i < 10; i++)
	{
		cout << arr[i]<<endl;
	}
}
int main()
{
	//��װһ������������ð������ʵ�ֶ������������������ arr={4,3,6,9,1,2,10,8,7,5};
	//1.��������
	int arr[10] = { 4,3,6,9,1,2,10,8,7,5 };
	//2.��������ʵ��ð������
	//����������뺯����ȷ�ϸ���
	//3.��ӡ����������
	int length = sizeof(arr) / sizeof(arr[0]);
	bubble(arr, length);
	printarr(arr,length);
	return 0;
}