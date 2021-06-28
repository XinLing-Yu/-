#include<iostream>
#include<string>
using namespace std;
class Shape
{
public:
	int color;
	void printArea()
	{
		cout << "条件不足，现在还不知道形状的面积"<<endl;
	}
	Shape(string n)
	{
		if (n == "红")
			color=1;
		else if (n == "黄")
			color=2;
		else if (n == "绿")
			color=3;
		else if (n == "蓝")
			color=4;
	}
	string getcolor()
	{
		if(color==1)
			return "红色";
		else if(color==2)
			return "黄色";
		else if(color==3)
			return "绿色";
		else if(color==4)
			return "蓝色";
	}
};
class Triangle:public Shape
{
private:
	double bottom, height;
public:
	Triangle(string n, int b, int h) :Shape(n)
	{
		bottom = b;
		height = h;
	}
	void printArea()
	{
		cout <<getcolor()<< "三角形面积：" << (bottom * height) / 2 << endl;
	}
};
class Square :public Shape
{
private:
	double length;
public:
	Square(string n, int l) :Shape(n)
	{
		length = l;
	}
	void printArea()
	{
		cout <<getcolor()<< "正方形面积：" << (length*length) << endl;
	}
};
class Circle :public Shape
{
private:
	double radius;
public:
	Circle(string n, int r) :Shape(n)
	{
		radius = r;
	}
	void printArea()
	{
		cout <<getcolor()<< "圆的面积：" << (3.14 * radius * radius) / 2 << endl;
	}
};
class Rectangle :public Shape
{
private:
	double length,width;
public:
	Rectangle(string n, int l, int w) :Shape(n)
	{
		length = l;
		width = w;
	}
	void printArea()
	{
		cout <<getcolor()<< "矩形面积：" << (length*width) << endl;
	}
};
int main()
{
	Shape s1("红");
	s1.getcolor();
	s1.printArea();
	Triangle t1("黄",2, 3);
	t1.printArea();
	Square s("绿", 2);
	s.printArea();
	Circle c("蓝", 3);
	c.printArea();
	Rectangle r("红", 1, 2);
	r.printArea();
	return 0;
}