#include<iostream>
#include<string>
using namespace std;
class Shape
{
public:
	int color;
	void printArea()
	{
		cout << "�������㣬���ڻ���֪����״�����"<<endl;
	}
	Shape(string n)
	{
		if (n == "��")
			color=1;
		else if (n == "��")
			color=2;
		else if (n == "��")
			color=3;
		else if (n == "��")
			color=4;
	}
	string getcolor()
	{
		if(color==1)
			return "��ɫ";
		else if(color==2)
			return "��ɫ";
		else if(color==3)
			return "��ɫ";
		else if(color==4)
			return "��ɫ";
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
		cout <<getcolor()<< "�����������" << (bottom * height) / 2 << endl;
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
		cout <<getcolor()<< "�����������" << (length*length) << endl;
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
		cout <<getcolor()<< "Բ�������" << (3.14 * radius * radius) / 2 << endl;
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
		cout <<getcolor()<< "���������" << (length*width) << endl;
	}
};
int main()
{
	Shape s1("��");
	s1.getcolor();
	s1.printArea();
	Triangle t1("��",2, 3);
	t1.printArea();
	Square s("��", 2);
	s.printArea();
	Circle c("��", 3);
	c.printArea();
	Rectangle r("��", 1, 2);
	r.printArea();
	return 0;
}