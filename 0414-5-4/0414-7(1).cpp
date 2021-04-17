#include<iostream>
using namespace std;
int main()
{
	char s[100];
	int i=0;
    cin>>s;
    while (s[i++]!='\0');
    i--; 
    for(int j=0;j<i;j++)
	{
        cout<<s[i-j-1];
    }
    cout<<endl;
	return 0;
}