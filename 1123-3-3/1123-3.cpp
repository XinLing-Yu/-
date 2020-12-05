#include<iostream>
using namespace std;
int main()
{
	double m0,p;
	cin>>m0;
	if(m0<3000)
	{
		p=0;
	}
	if(m0>=3000&&m0<4500)
	{
		p=m0*0.05;
	}
	else if(m0>=4500&&m0<7500)
	{
		p=m0*0.1;
	}
	else if(m0>=7500&&m0<12000)
	{
		p=m0*0.2;
	}
	else if(m0>=12000&&m0<38000)
	{
		p=m0*0.25;
	}
	else if(m0>=38000&&m0<58000)
	{
		p=m0*0.3;
	}
	else if(m0>=58000&&m0<83000)
	{
		p=m0*0.35;
	}
	else if(m0>=83000)
	{
		p=m0*0.45;
	}
	cout<<p<<endl;
	return 0;
}
