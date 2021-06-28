#include<iostream>
using namespace std;
int main()
{
	char *s="CHINA";
	while(*s!='\0')
	{
		cout<<*s;
		s++;
	}
	cout<<endl;
	return 0;
}