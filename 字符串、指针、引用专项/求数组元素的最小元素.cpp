#include<iostream>
using namespace std;
double* min(double a[],int n)
{
	int i,k=0;
	for(i=1;i<n;i++)
	{
		if(a[i]<a[k])
			k=i;
	}
	return &a[k];
}
int main()
{
	double a[5]={1.1,2.2,5.9,0.2,0.1};
	double *p;
	p=min(a,5);
	cout<<*p<<endl;
	return 0;
}