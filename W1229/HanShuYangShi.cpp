#include<iostream>
using namespace std;
//1.�޲��޷�
void test01()
{
	cout << "T01" << endl;
}
//2.�в��޷�
void test02(int a)
{
	cout << "test02=" << a << endl;
}
//3.�޲��з�
int test03()
{
	cout << "T03" << endl;
	return 100;
}
//4.�в��з�
int main()
{
	test03();
	return 0;
}