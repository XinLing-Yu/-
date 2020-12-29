#include<iostream>
using namespace std;
//1.无参无返
void test01()
{
	cout << "T01" << endl;
}
//2.有参无返
void test02(int a)
{
	cout << "test02=" << a << endl;
}
//3.无参有返
int test03()
{
	cout << "T03" << endl;
	return 100;
}
//4.有参有返
int main()
{
	test03();
	return 0;
}