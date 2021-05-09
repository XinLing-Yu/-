//1.写一个函数，求字符串的长度。在main函数中输入字符串，并输出长度。
#include<iostream>
using namespace std;
int strl(char s[],int n)
{
	int i=0,k=0;
	while(*s!=0)
	{
		k++;
		s++;
	}
	return k;
}
int main()
{
	char s[100];
	cin>>s;
	int count=strl(s,40);
	cout<<count<<endl;
	return 0;
}