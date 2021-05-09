#include<iostream>
using namespace std;
void fix(int *a, int len, const int m)
{
    int temp[10];
    int j = 0;
    for (int i = len-m; i < len; i++)
    {
        temp[j] = a[i];
        j++;
    }
    for (i = len - m - 1; i >= 0; i--)
    {
        a[i + m] = a[i];
    }
    for (i = 0; i < m; i++)
    {
        a[i] = temp[i];
    }
}
int main()
{
    int a[50];
    int m, n;
	cout<<"输入数字个数:";
    cin>>n;
	cout<<"向后移的位数:";
	cin>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    fix(a, n, m);
    for (i = 0; i < n; i++)
    {
        cout<<a[i]<<' ';
    }
    return 0;
}