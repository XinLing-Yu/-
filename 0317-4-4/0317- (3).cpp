#include<iostream>
using namespace std;
int isShuix(int n)
{
    int a = n/100;
    int b = n/10%10;
    int c = n%10;
    return a*a*a + b*b*b + c*c*c == n;
}
int main()
{
    int i;
    for(i = 100; i< 1000; i ++)
        if(isShuix(i)) cout<<i<<endl;
}