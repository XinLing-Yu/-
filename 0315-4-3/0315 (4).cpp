#include<iostream>
using namespace std;
template<typename T>
T min(T x,T y,T z)
{
	T t;
	if(x>y)
	{
		t=x;
		x=y;
		y=t;
	}
	if(y>z)
	{
		t=y;
		y=z;
		z=t;
	}
	return x;
}
int main()
{
	int a,b,c;
	char d,e,f;
	double g,h,i;
	cin>>a>>b>>c;
	cin>>d>>e>>f;
	cin>>g>>h>>i;
	cout<<min(a,b,c)<<endl;
	cout<<min(d,e,f)<<endl;
	cout<<min(g,h,i)<<endl;
	return 0;
}