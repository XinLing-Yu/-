#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int n = 0;
    int i = 0;
    int an = 0;
    int sn = 0;
    cin>>a>>n;
    for (i = 0; i < n; i++)
    {
        an = 10 * an + a;
        sn += an;
    }
    cout << sn << endl;
    system("pause");
    return 0;
}