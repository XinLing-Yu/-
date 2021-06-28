#include<iostream>
using namespace std;
class Complex
{
public:
	Complex(double r = 0, double i = 0)
	{
		real = r;
		imag = i;
	}
	void display()
	{

		if (imag < 0)
			cout << real << "-" << -imag << "i";
		else
			cout << real << "+" << imag << "i";
	}
	Complex operator+(Complex x2)
	{
		double r = this->real + x2.real;
		double i = this->imag + x2.imag;
		return Complex(r, i);
	}
	friend Complex operator+(int x2, Complex c1);
private:
	double real, imag;
};
Complex operator+(int x2,Complex c1)
{
	double r = c1.real + x2;
	return Complex(r, c1.imag);
}
int main()
{
	Complex c1(2, 3);
	Complex c2(4, -5);
	Complex c3;
	Complex c4,c5;
	c3 = c1 + c2;
	c4 = c1 + 1;
	c5 = 2 + c2;
	c1.display();
	cout << "+";
	c2.display();
	cout << "=";
	c3.display();
	cout << endl;
	c1.display();
	cout << "+1";
	cout << "=";
	c4.display();
	cout << endl;
	cout << "2+";
	c2.display();
	cout << "=";
	c5.display();
	cout << endl;
	return 0;
}