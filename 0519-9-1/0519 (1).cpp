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
		cout<<"����Ӿ�ذ뾶��";
		cin>>R;
	}
	void oRoad()
	{
		cout<<"��������ۣ�"<<(3.14*(R+3)*(R+3)-3.14*R*R)*rPrice<<"Ԫ"<<endl;
	}
	void oZ()
	{
		cout<<"դ������ۣ�"<<2*3.14*(R+3)*zPrice<<"Ԫ"<<endl;
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