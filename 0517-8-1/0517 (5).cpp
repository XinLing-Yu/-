#include<iostream>
using namespace std;
class Time
{
public:
	void inT();
	void pnT();
private:
	int hour;
	int minute;
	int sec;
};
void Time::inT()
{
	cin >> hour >> minute >> sec;
}
void Time::pnT()
{
	cout << hour << ":" << minute << ":" << sec << endl;
}
int main()
{
	Time t1;
	t1.inT();
	t1.pnT();
	return 0;
}