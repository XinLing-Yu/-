#include<iostream>
using namespace std;
inline int iNum(char p[20])
{
	
	int i;
	if(p[i]>='0'&&p[i]<='9')
		return 1;
	else
		return 0;
}
int main()
{
	char p[20];
	for(int i=0;i<20;i++)
	{
		cin>>p[i];
	}
	for(int j=0;j<20;j++)
	{
		if(iNum(p[i]))
			cout<<"是数字！";
		else
			cout<<"不是数字！";
	}
	return 0;

}