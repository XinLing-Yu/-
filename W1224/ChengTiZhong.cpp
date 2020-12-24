/*在一个数组中找出五只小猪中体重最大和最小的*/
#include<iostream>
using namespace std;
int main()
{
	int i,max=0,min=10000;
	int arr[5] = { 300,350,200,400,250 };
	for ( i = 0; i < 5; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << "体重最大的是" << max <<"，最小的是"<<min<< endl;
	return 0;
	system("pause");
}