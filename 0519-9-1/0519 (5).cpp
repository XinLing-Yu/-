/*5.	设计一个立方体类Box，它能计算并输出立方体的体积和表面积。
Box类包含三个私有数据成员a(立方体边长)、volume(体积)和area(表面积)，
另有两个构造函数以及seta()(设置立方体边长)、getvolume()(计算体积)、getarea()(计算表面积)和disp()(输出结果)。*/
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
	cout<<"立方体的体积为："<<volume<<endl;
	cout<<"立方体的表面积为："<<area<<endl;
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