#include <iostream>
using namespace std;
void gobaha(int n);                  
int prime(int n);                    
int main()
{
    int num;
    cin>>num;
    gobaha(num);
    return 0;
}
int prime(int n)
{
    int i;
    for (i=2; i<n&&(n%i!=0); i++);
    return n==i ? 1 : 0; 
}
void gobaha(int n)
{
    int m, i;
    for (i=3; i<n; i++)
        if (prime(i)==1)
		{
            m=n-i;
            if (prime(m)==1&&i<=m)
                cout<<n<<'='<<i<<'+'<<m<<endl;
        }
}
