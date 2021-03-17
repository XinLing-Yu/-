#include<iostream>
using namespace std;
void z(int n)
{
    cout<<n<<"=";
    for(int i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            cout<<i;
            n/=i;
            if(n!=1) cout<<"*";
        }
    }
	cout<<endl;
}
int main()
{
    int n;
    cout<<"ÇëÊäÈëÕûÊý£º";
	cin>>n;
    z(n);
    return 0;
}