#include<iostream>
using namespace std;
void TongJi(char s[])
{
	int i,dx=0,xx=0,sp=0,num=0,other=0;
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
			dx++;
		else if(s[i]>='a'&&s[i]<='z')
			xx++;
		else if(s[i]==' ')
			sp++;
		else if(s[i]>='0'&&s[i]<='9')
			num++;
		else
			other++;
	}
	cout<<"��д��ĸ��"<<dx<<"��"<<endl;
	cout<<"Сд��ĸ��"<<xx<<"��"<<endl;
	cout<<"�ո���"<<sp<<"��"<<endl;
	cout<<"������"<<num<<"��"<<endl;
	cout<<"�����ַ���"<<other<<"��"<<endl;
}
int main()
{
	char s[100];
	cout<<"�����ַ�����";
	cin.getline(s,100);
	TongJi(s);
	return 0;
}