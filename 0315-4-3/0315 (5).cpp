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
			cout<<"�����֣�"<<endl;
		else
			cout<<"�������֣�"<<endl;
	}
	return 0;
}