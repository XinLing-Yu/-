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
	Date operator-(Date d2)
	{
		Date dx;
		dx.year = this->year - d2.year;
		dx.month = this->month - d2.month;
		dx.days = this->days - d2.month;
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
	Date d2(2020, 6, 6);
	Date d3 = d1 - d2;
	d1.display();
	cout << "-";
	d2.display();
	cout << "=";
	d3.display();
	cout << endl;
	return 0;
}