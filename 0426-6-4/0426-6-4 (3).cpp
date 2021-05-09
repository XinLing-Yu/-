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
	cout<<"大写字母有"<<dx<<"个"<<endl;
	cout<<"小写字母有"<<xx<<"个"<<endl;
	cout<<"空格有"<<sp<<"个"<<endl;
	cout<<"数字有"<<num<<"个"<<endl;
	cout<<"其它字符有"<<other<<"个"<<endl;
}
int main()
{
	char s[100];
	cout<<"输入字符串：";
	cin.getline(s,100);
	TongJi(s);
	return 0;
}