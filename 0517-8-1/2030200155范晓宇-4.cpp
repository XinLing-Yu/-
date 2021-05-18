#include<iostream>
using namespace std;
class Time
{
public:
	void inT()
	{
		cin >> hour >> minute >> sec;
	}
	void pnT()
	{
		cout << hour << ":" << minute << ":" << sec << endl;
	}
private:
	int hour;
	int minute;
	int sec;
};
int main()
{
	Time t1;
	t1.inT();
	t1.pnT();
	return 0;
}