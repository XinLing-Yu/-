#include<iostream>
using namespace std;
class Date
{
	int year, month, days;
public:
	Date()
	{
		year = 0;
		month = 0;
		days = 0;
	}
	Date(int y, int m, int d)
	{
		year = y;
		month = m;
		days = d;
	}
	Date operator++()
	{
		Date dx=*this;
		dx.days += 1;
		return dx;
	}
	void display()
	{
		cout << year << "/" << month << "/" << days ;
	}
};
int main()
{
	Date d1(2022, 7, 6);
	d1.display();
	cout << endl;
	//d1++;
	d1++.display();
	cout << endl;
	return 0;
}