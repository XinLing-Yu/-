#include<iostream>
using namespace std;
int main()
{
	int arr[5] = {8,6,5,4,1};
	int start = 0, end = sizeof(arr) / sizeof(arr[0]) - 1;
	cout << "ÄæÖÃÇ°:" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	cout<<endl;
	while (start < end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
	cout << "ÄæÖÃºó:" << endl;
	for (i = 0; i < 5; i++)
	{
		cout << arr[i] << " ";
	}
	return 0;
}