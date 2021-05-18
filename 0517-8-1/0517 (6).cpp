#include<iostream>
using namespace std;
class Zhu
{
public:
	void inDt();
	void cal();
	void outV();
private:
	double length, width, height,v;
};
void Zhu::inDt()
{
	cout << "输入长方柱的长 宽 高：";
	cin >> length >> width >> height;
}
void Zhu::cal()
{
	v = length * width * height;
}
void Zhu::outV()
{
	cout << "体积为：" << v << endl;
}
int main()
{
	Zhu z;
	z.inDt();
	z.cal();
	z.outV();
	return 0;
}