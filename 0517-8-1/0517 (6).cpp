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
	cout << "���볤�����ĳ� �� �ߣ�";
	cin >> length >> width >> height;
}
void Zhu::cal()
{
	v = length * width * height;
}
void Zhu::outV()
{
	cout << "���Ϊ��" << v << endl;
}
int main()
{
	Zhu z;
	z.inDt();
	z.cal();
	z.outV();
	return 0;
}