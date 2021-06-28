#include<iostream>
using namespace std;
class Time
{
public:
	void setT(int h,int m,int s);
	void showT();
private:
	int hour,minute,sec;
};
void Time::setT(int h,int m,int s)
{
	hour=h;
	minute=m;
	sec=s;
}
void Time::showT()
{
	cout<<hour<<":"<<minute<<":"<<sec<<endl;
}
void main()
{
	Time t;
	t.setT(10,50,00);
	t.showT();
}

