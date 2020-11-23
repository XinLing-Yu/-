#include<iostream>
using namespace std;
int main()
{
	int n,n0,n1,n2,n3,n4,n5;
	cin>>n;
	n5=n/10000;
	n4=n/1000%10;
	n3=n/100%10;
	n2=n/10%10;
	n1=n%10;
	if(n5!=0)
	{
		cout<<"五位数"<<" "<<n5<<" "<<n4<<" "<<n3<<" "<<n2<<" "<<n1<<endl;
		cout<<n1<<n2<<n3<<n4<<n5<<endl;
	}
	else if(n4!=0)
	{
		cout<<"四位数"<<" "<<n4<<" "<<n3<<" "<<n2<<" "<<n1<<endl;
		cout<<n1<<n2<<n3<<n4<<endl;
	}
	
	else if(n3!=0)
	{
		cout<<"三位数"<<" "<<n3<<" "<<n2<<" "<<n1<<endl;
		cout<<n1<<n2<<n3<<endl;
	}
	else if(n2!=0)
	{
		cout<<"二位数"<<" "<<n2<<" "<<n1<<endl;
		cout<<n1<<n2<<endl;
	}
	else if(n1!=0)
	{
		cout<<"一位数"<<" "<<n1<<endl;
		cout<<n1<<endl;
	}
	return 0;
}
