#include<iostream>
using namespace std;
class point
{
	int x, y, z;
public:
	point()
	{
		x = 0; 
		y = 0; 
		z = 0;
	}
	point(int xx, int yy, int zz)
	{
		x = xx;
		y = yy;
		z = zz;
	}
	void display()
	{
		cout << "(" << x << "," << y << "," << z << ")";
	}
	point operator+(point p2)
	{
		point px;
		px.x = this->x + p2.x;
		px.y = this->y + p2.y;
		px.z = this->z + p2.z;
		return px;
	}
	point operator+(int n)
	{
		point px;
		px.x = this->x + n;
		px.y = this->y + n;
		px.z = this->z + n;
		return px;
	}
	point operator-(point p2)
	{
		point px;
		px.x = this->x - p2.x;
		px.y = this->y - p2.y;
		px.z = this->z - p2.z;
		return px;
	}
	bool operator==(point p2)
	{
		if ((this->x == p2.x) && (this->y == p2.y) && (this->z == p2.z))
		{
			return 1;
		}
		return 0;
	}
};
int main()
{
	point p1(1, 1, 1);
	p1.display();
	cout << "+";
	point p2(2, 2, 2);
	p2.display();
	cout << "=";
	point p3 = p1 + p2;
	p3.display();
	cout << endl;
	p1.display();
	cout << "-";
	p2.display();
	cout << "=";
	point p4 = p1 - p2;
	p4.display();
	cout << endl;
	p1.display();
	cout << "Æ½ÒÆ3";
	cout << "=";
	point p5 = p1 +3;
	p5.display();
	cout << endl;
	cout << (p1 == p2) << endl;;
	return 0;
}