#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int i=1,j=1;
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=i;j++)
		{
			cout<<i<<"*"<<j<<"="<<i*j<<"\t";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
