/*5.	���һ����������Box�����ܼ��㲢��������������ͱ������
Box���������˽�����ݳ�Աa(������߳�)��volume(���)��area(�����)��
�����������캯���Լ�seta()(����������߳�)��getvolume()(�������)��getarea()(��������)��disp()(������)��*/
#include<iostream>
using namespace std;
class Box
{
public:
	Box();
	Box(int);
	void seta();
	void getvolume();
	void getarea();
	void disp();
private:
	int a,volume,area;
};
Box::Box(int n)
{
	a=n;
}
Box::Box()
{
	a=1;
}
void Box::seta()
{
	cin>>a;
}
void Box::getvolume()
{
	volume=a*a*a;
}
void Box::getarea()
{
	area=6*a*a;
}
void Box::disp()
{
	cout<<"����������Ϊ��"<<volume<<endl;
	cout<<"������ı����Ϊ��"<<area<<endl;
}
int main()
{
	Box b;
	b.seta();
	b.getvolume();
	b.getarea();
	b.disp();
	return 0;
}