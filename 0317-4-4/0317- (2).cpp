#include<iostream>
using namespace std;
int f(int x,int z,int y=10)
{
	int result;
	if(x==0)
		result=y+z;
	else if(x==1)
		result=y*z;
	else if(x>1)
		result=x+y+z;
	return result;
}
int main()
{
	int x,z,result;
	cout<<"ÊäÈëx,z:";
	cin>>x>>z;
	result=f(x,z);
	cout<<result<<endl;
	return 0;
}