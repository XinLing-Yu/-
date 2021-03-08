#include<iostream>
using namespace std;
int main()
{
    int a[30], max;
    cout << "请输入30个数:" << endl;
    cin >> a[0];
    max = a[0];
    for (int i = 1; i < 30; i++)
    {
        cin >> a[i];
        max = a[i] > max ? a[i] : max;  //条件表达式
    }
    cout << "max: " << max << endl;
    return 0;
}