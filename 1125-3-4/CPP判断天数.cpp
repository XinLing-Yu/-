#include<iostream>
using namespace std;
int main()
{
	int y,m,d,ds;
	cin>>y>>m>>d;
	ds=d;
	switch(m-1)
	{
	case 11:ds+=30;
	case 10:ds+=31;
	case 9:ds+=30;
	case 8:ds+=31;
	case 7:ds+=31;
	case 6:ds+=30;
	case 5:ds+=31;
	case 4:ds+=30;
	case 3:ds+=31;
	case 2:
		if((y%4==0&&y%100!=0)||y%400==0)
		{
			ds+=28;
		}
		else
		{
			ds+=29;
		}
	case 1:ds+=31;
	case 0:ds+=0;
	}

		cout<<ds<<endl;
		return 0;
}