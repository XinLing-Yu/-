#include<iostream>
using namespace std;
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	cout << "数组第1个元素首地址为：" << &arr[0] << endl;
	cout << "数组第2个元素首地址为：" << &arr[1] << endl;
	return 0;
	system("pause");
}