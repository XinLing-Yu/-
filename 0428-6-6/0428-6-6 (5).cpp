#include<iostream>
#include<cmath>
using namespace std;
void oNum(char s[],int n)
{
	char *i;
	int j,k,t,m,temp[10],num;
	double sum,a[30];
	for(i=s,num=0,j=0,m=0;i<s+n;i++)
	{
		if(*i>'0'&&*i<='9')
			num=1,temp[j++]=(int)(*i-'0');
		else if(num)
		{
			for(num=0,k=0,sum=0,t=j-1;k<j;sum+=temp[k]*pow(10,t),t--,k++);
			a[m++]=sum,j=0;
		}
	}
	for (j = 0, cout << "有" << m << "个数字", m;j<m;cout<<a[j++]<<' ');
	cout << endl;
}
int main()
{
	char str[30];
	cout << "输入字符串：";
	cin.getline(str, 30);
	oNum(str, 30);
    return 0;
}