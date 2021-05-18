#include<iostream>
using namespace std;
class sum
{
public:
	void iNum();
	int cNum();
	void oNum();
private:
	int n1, n2, sum;
};
void sum::iNum()
{
	cin >> n1 >> n2;
}
int sum::cNum()
{
	sum = n1 + n2;
	return sum;
}
void sum::oNum()
{
	cout << cNum() << endl;
}
void main()
{
	sum s;
	s.iNum();
	s.cNum();
	s.oNum();
}
