#include<iostream>
using namespace std;
struct fish
{
	int year;
	int month;
	int day;
}start_day,today;
int cDays(int year, int month, int day)
{
	int count;
	count = day;
	switch (month - 1)
	{
	case 11:count += 31;
	case 10:count += 31;
	case 9:count += 30;
	case 8:count += 31;
	case 7:count += 31;
	case 6:count += 30;
	case 5:count += 31;
	case 4:count += 30;
	case 3:count += 31;
	case 2:
		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
			count += 28;
		else
			count += 29;
	case 1:count += 31;
	case 0:count += 0;
	}
	return count;
}
int main()
{
	int m,day_sub,n=0;
	cout << "输入开始打鱼的日期（年 月 日）：";
	cin >> start_day.year >> start_day.month >> start_day.day;
	cout << "输入现在的日期（年 月 日）：";
	cin >> today.year >> today.month >> today.day;
	if(today.year-start_day.year==0)
		day_sub = cDays(today.year, today.month, today.day) - cDays(start_day.year, start_day.month, start_day.day);
	else
	{
		for (int i = start_day.year; i < today.year; i++)
		{
			if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
				n += 366;
			else
				n += 365;
		}
		day_sub = cDays(today.year, today.month, today.day) - cDays(start_day.year, start_day.month, start_day.day) + n;
	}
	m = day_sub % 5;
	cout << "过了" << day_sub << "天" << endl;
	if (m <= 2)
		cout << "在打鱼" << endl;
	else
		cout << "在晒网" << endl;
}