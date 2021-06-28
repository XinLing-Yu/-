#include<iostream>
using namespace std;
class student
{
public:
	student(int a, int b);
	void put_Array(student s[]);
	void max(student s[]);
private:
	int id, grade;
};
void student:: put_Array(student s[])
{
	student* p = s;
	cout << "数组元素有：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << (p + i)->id << " " << (p + i)->grade << endl;
	}
}
student::student(int a, int b)
{
	id = a;
	grade = b;
}
void student:: max(student s[])
{
	student* p = s;
	int max, m;
	max = p->grade;
	m = p->id;
	for (int i = 0; i < 5; i++)
	{
		if ((p + i)->grade > max)
		{
			max = (p + i)->grade;
			m = (p + i)->id;
		}
	}
	cout << "最高分为" << m << " " << max << endl;
}
int main()
{
	student s[5] =
	{
		student(1001,60),
		student(1002,70),
		student(1003,100),
		student(1004,80),
		student(1005,40)};
	s->put_Array(s);
	s->max(s);
	return 0;
}