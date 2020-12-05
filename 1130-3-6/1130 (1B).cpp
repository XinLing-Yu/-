#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i,j,n;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cout<<setw(n-i+1)<<" ";
		for(j=1;j<=i;j++)
		{
			cout<<"1";
		}
		cout<<endl;
	}
	system("pause");
	return 0;
}
