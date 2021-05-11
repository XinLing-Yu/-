#include<iostream>
using namespace std;
struct date
{
	int year;
	int month;
	int days;
}Date;
int cDays(int year,int month,int day)
{
	int count;
	count=Date.days;
	switch(month-1)
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
	return count;
}
int main()
{
	cout<<"输入年 月 日：";
	cin>>Date.year>>Date.month>>Date.days;
	int n;
	n=cDays(Date.year,Date.month,Date.days);
	cout<<Date.month<<"月"<<Date.days<<"日是这一年的第"<<n<<"天"<<endl;
	return 0;
}
