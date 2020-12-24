#include<iostream>
using namespace std;
int main()
{
	int arr[5] = {1,3,2,5,4};//首下标0；尾下标n-1;
	int start = 0, end = sizeof(arr) / sizeof(arr[0]) - 1;
	cout << "before:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	cout << "after:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
	system("pause");
}