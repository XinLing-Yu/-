#include<iostream>
#include<string>
using namespace std;
int main()
{
	char s1[100],s2[100],s3[100];
	gets(s1);
	gets(s2);
	gets(s3);
	char *p1,*p2,*p3,*t;
	p1=s1;
	p2=s2;
	p3=s3;
	cout<<p1<<' '<<p2<<' '<<p3<<endl;
	if((strcmp(s1,s2))<0)
	{
		t=p1;
		p1=p2;
		p2=t;
	}
	if((strcmp(s2,s3))<0)
	{
		t=p2;
		p2=p3;
		p3=t;
	}
	if((strcmp(s1,s2))<0)
	{
		t=p1;
		p1=p2;
		p2=t;
	}
	cout<<p1<<' '<<p2<<' '<<p3<<endl;
	return 0;
}