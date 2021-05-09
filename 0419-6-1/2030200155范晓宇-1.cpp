#include<iostream>
using namespace std;
int main()
{
	int a,b,c,*p1,*p2,*p3;
	cin>>a>>b>>c;
	p1=&a;
	p2=&b;
	p3=&c;
	if(*p1>*p2)
		swap(*p1,*p2);
	if(*p2>*p3)
		swap(*p2,*p3);
	if(*p1>*p2)
		swap(*p1,*p2);
	cout<<*p1<<' '<<*p2<<' '<<*p3<<endl;
	return 0;
}