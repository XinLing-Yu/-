#include<iostream>
using namespace std;
class vClock
{
public:
	void setT(int h=0,int m=0,int s=0)
	{
		hour=h;
		minute=m;
		sec=s;
	}
	void update()
	{
		sec++;
		if(sec>=60)
		{
			minute++;
			sec=0;
			if(minute>=60)
			{
				hour++;
				minute=0;
				if(hour>=24)
				{
					hour=0;
					minute=0;
					sec=0;
				}
			}
		}
	}
	void showT()
	{
		cout<<hour<<":"<<minute<<":"<<sec<<endl;
	}
private:
	int hour,minute,sec;
};
void main()
{
	vClock t;
	t.setT(2,0,0);
	for(int i=0;i<361;i++)
	{
		t.showT();
		t.update();
	}
	
}