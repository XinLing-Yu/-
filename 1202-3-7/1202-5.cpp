#include<iostream>
using namespace std;
int main()
{
    int i, j, n;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
            printf("1");
        printf("\n");
    }
    for (i = n-1; i >=0; i--)
    {
        for (j = n-i+1; j >1; j--)
            printf("1");
        printf("\n");
    }
    printf("\n");
    system("pause");
    return 0;
}

