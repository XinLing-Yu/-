#include<iostream>
using namespace std;
int main()
{
	char c[6]="*****";
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		cout<<c<<endl;
	}
	return 0;
}