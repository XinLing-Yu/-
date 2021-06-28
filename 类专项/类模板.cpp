#include<iostream>
using namespace std;
template<class T>
class point
{
	T x,y;
public:
	point(T xx,T yy);
	void display();
};
template<class T>
point<T>::point(T xx,T yy)
{
	x=xx;
	y=yy;
}
template<class T>
void point<T>::display()
{
	cout<<"("<<x<<","<<y<<")"<<endl;
}
int main()
{
	point <int>A(2,3);
	A.display();
	point <double>B(1.1,2.2);
	B.display();
	return 0;
}