#include<iostream>
using namespace std;
int main()
{
	int n1,n2,t,i=1,m; 
	cin>>n1>>n2;
	while(i<=n1)
	{
		if(n1%i==0&&n2%i==0)
		{
			t=i;
		}
		i++;
	}	
	cout<<t<<endl; 
	cout<<(n1*n2)/t<<endl;
	return 0;
}
