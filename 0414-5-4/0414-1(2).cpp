#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1="*****";
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<i;j++)
		{
			cout<<" ";
		}
		cout<<s1<<endl;
	}
	return 0;
}