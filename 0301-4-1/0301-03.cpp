#include<iostream>
using namespace std;
int main()
{
    int a[30], max;
    cout << "ÇëÊäÈë30¸öÊý:" << endl;
    cin >> a[0];
    max = a[0];
    for (int i = 1; i < 30; i++)
    {
        cin >> a[i];
        max = a[i] > max ? a[i] : max; 
    }
    cout << "max: " << max << endl;
    return 0;
}