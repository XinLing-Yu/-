#include<iostream>
using namespace std;
class complex
{
public:
	complex(int rr = 0, int ii = 0)
	{
		real = rr;
		imag = ii;
	}
	complex operator++()
	{
		this->real += 1;
		this->imag += 1;
		return complex(this->real, this->imag);
	}
	complex operator++(int)
	{
		complex temp = *this;
		this->real += 1;
		this->imag += 1;
		return temp;
	}
	void display()
	{
		cout << real << "+" << imag << "i";
	}
private:
	int real, imag;
};


int main()
{
	complex c1(1, 5);
	cout << "c1=";
	c1.display();
	cout << endl;
	cout << "++c1=";
	(++c1).display();
	cout << endl;
	cout << "此时c1=";
	c1.display();
	cout << endl;
	cout << "c1++之后=";
	(c1++).display();
	cout << endl;
	cout << "此时c1=";
	c1.display();
	cout << endl;
	return 0;
}