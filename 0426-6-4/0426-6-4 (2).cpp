#include<iostream>
using namespace std;
void cpy(char s[],int m)
{
	char s1[100];
	for(int i=m-1,k=0;s[i]!='\0',s1[i]!='\0';i++,k++)
	{
		s1[k]=s[i];
		
	}
	cout<<s1<<endl;
}
int main()
{
	char s[100];
	int m;
	cout<<"�����ַ�����";
	cin.getline(s,100);
	cout<<"�ӵڼ�����ʼ��";
	cin>>m;
	cpy(s,m);
	return 0;
}