#include<iostream>
using namespace std;
int max(int x,int y)
{
	return (x>y?x:y);
}
int main()
{
	int a,b,c;
	cout<<"�������������֣�"<<endl;
	cin>>a>>b;
	c=max(a,b);
	cout<<"max="<<c<<endl;
	return 0;
}
