#include<iostream>
using namespace std;
int main()
{
	int n,t,i=1,m,b=0; 
	do
	{
		if(i%3==0&&i%5==0)
		{
			cout<<i<<" ";
			b++;
			if(b%5==0)
			{
				cout<<"\n";
			}
		}
		i++;
	}
	while(i<=1000);	
	return 0;
}
