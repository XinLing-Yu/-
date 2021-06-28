#include<iostream>
using namespace std;
class swim
{
public:
	swim()
	{
		zPrice=35;
		rPrice=20;
	}
	void getR()
	{
		cout<<"输入泳池半径：";
		cin>>R;
	}
	void oRoad()
	{
		cout<<"过道的造价："<<(3.14*(R+3)*(R+3)-3.14*R*R)*rPrice<<"元"<<endl;
	}
	void oZ()
	{
		cout<<"栅栏的造价："<<2*3.14*(R+3)*zPrice<<"元"<<endl;
	}
private:
	double R,s,S,zPrice,rPrice;
};
void main()
{
	swim s;
	s.getR();
	s.oRoad();
	s.oZ();
}