#include<iostream>
#include<string>
using namespace std;
int main()
{
	string a;
	int i,n;
	cin>>a;
	n=a.size();
	for(i=0;i<n/2;i++)
	{
		swap(a[i],a[n-i-1]);
	}
	cout<<a<<endl;
	return 0;
}