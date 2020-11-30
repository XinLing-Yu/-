#include<iostream>
using namespace std;
int main()
{
    int i, m, sum;
    for (i = 1, m = 1, sum = 0; i <= 20; i++)
    {
        m = m * i;
        sum = sum + m;
    }
    cout << sum << endl;;
    system("pause");
    return 0;
}
