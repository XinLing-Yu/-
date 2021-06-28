#include<iostream>
using namespace std;
class student
{
public:
	student(int a,int b)
	{
		id=a;
		grade=b;
	}
	int id,grade;
};
int main()
{
	student s[5]=
	{
		student(1001,60),
		student(1002,70),
		student(1003,70),
		student(1004,80),
		student(1005,90)};
	student* p = s;
	for (int i = 0; i < 5; i += 2)
	{
		cout << (p+i)->id<<" "<<(p+i)->grade << endl;
	}
	return 0;
}