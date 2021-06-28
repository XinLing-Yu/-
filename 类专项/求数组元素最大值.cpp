#include<iostream>
using namespace std;
class aMax
{
public:
	void iArray();
	void cN();
	void oMax();
	aMax(int a)
	{
		cout<<a<<endl;
	}
private:
	int a[10];
	int max;
};
void aMax::iArray()
{
	for(int i=0;i<10;i++)
	{
		cin>>a[i];
	}
}
void aMax::cN()
{
	max=a[0];
	for(int i=1;i<10;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
}
void aMax::oMax()
{
	cout<<max<<endl;
}
int main()
{
	aMax p;
	p.iArray();
	p.cN();
	p.oMax();
	return 0;
}