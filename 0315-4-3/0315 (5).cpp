#include<iostream>
using namespace std;
inline bool f(char c)
{
	return c>='0'&&c<='9';
}
int main()
{
	char c;
	for(int i=0;i<20;i++)
	{
		cin>>c;
		cout<<c;
		if(f(c))
			cout<<"是数字！"<<endl;
		else
			cout<<"不是数字！"<<endl;
	}
	return 0;
}