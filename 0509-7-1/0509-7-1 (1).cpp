#include<iostream>
using namespace std;
struct date
{
	int year;
	int month;
	int days;
}Date;
int main()
{
	int count;
	count=Date.days;
	cout<<"输入年 月 日：";
	cin>>Date.year>>Date.month>>Date.days;
	switch(Date.month-1)
	{
	case 11:count+=31;
	case 10:count+=31;
	case 9:count+=30;
	case 8:count+=31;
	case 7:count+=31;
	case 6:count+=30;
	case 5:count+=31;
	case 4:count+=30;
	case 3:count+=31;
	case 2:
		if((Date.year%4==0&&Date.year%100!=0)||Date.year%400==0)
			count+=28;
		else
			count+=29;
	case 1:count+=31;
	case 0:count+=0;
	}
	cout<<Date.month<<"月"<<Date.days<<"日是一年的第"<<count<<"天"<<endl;
	return 0;
}
