#include<iostream>
using namespace std;
int main()
{
	int arr[9] = { 4,2,8,0,5,7,1,3,9 };
	cout << "Before:" << endl;
	for (int i = 0; i < 9; i++)
	{
		cout << arr[i] << '\t';
	}
	int temp;
	//PaiXuLunShu=YuanSuGeShu-1
	for (int j = 0; j < 9; j++)
	{
		//CiShu=YuanSuGeShu-DangQianLunShu-1
		for (int k = 0; k < 9-j-1; k++)
		{
			if (arr[k] > arr[k + 1])
			{
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
		}
	}
	cout << "After:" << endl;
	for (int j = 0; j < 9; j++)
	{
		cout << arr[j] << '\t';
	}
	return 0;
	system("pause");
}