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
	cout<<"����Ƚϵĸ�����";
	cin>>n;
	cout<<"�������֣�";
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	sMin(s,n);
	cout<<"��СֵΪ��";
	cout<<s[0]<<endl;
	return 0;
}