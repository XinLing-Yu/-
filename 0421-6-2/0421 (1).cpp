#include<iostream>
using namespace std;
void D1(int *q1,int *q2)
{
	*q1*=2;
	*q2*=2;
}
int main()
{
	int n1,n2,*p1,*p2;
	cin>>n1>>n2;
	p1=&n1;
	p2=&n2;
	D1(p1,p2);
	cout<<n1<<' '<<n2<<endl;
	return 0;
}