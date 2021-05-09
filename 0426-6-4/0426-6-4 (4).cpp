#include<iostream>
using namespace std;
void sMin(int s[],int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(s[i]>s[j])
				swap(s[i],s[j]);
		}
	}
}
int main()
{
	int s[100],int n;
	cout<<"输入比较的个数：";
	cin>>n;
	cout<<"输入数字：";
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	sMin(s,n);
	cout<<"最小值为：";
	cout<<s[0]<<endl;
	return 0;
}