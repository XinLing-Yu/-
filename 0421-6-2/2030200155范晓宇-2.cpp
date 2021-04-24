#include<iostream>
using namespace std;
void anti(int* x, int n)
{
	int* p, temp, * i, * j;	
	i = x;									
	j = x + n - 1;							
	p = x + (n-1)/2;								

	for (; i <= p; ++i, --j)					
	{
		temp = *i;
		*i = *j;
		*j = temp;
	}
}
int main()
{
	int a[10];
	for(int i=0;i<10;i++)
		cin>>a[i];
	cout << "原数组：";
	for (int i = 0; i < 10; i++)
		cout<< a[i]<<' ';
	cout << endl;
	anti(a, 10);
	cout << "逆置后数组：";
	for (int i = 0; i < 10; i++)
		cout << a[i] << ' ';
	cout << endl;
	return 0;
}