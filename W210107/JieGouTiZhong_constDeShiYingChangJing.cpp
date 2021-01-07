#include<iostream>
using namespace std;
struct student
{
	string name;
	int age;
	int score;
};
void printStu1(const struct student* s) //const防止误修改操作
{
	cout << s-> name << ",年龄：" << s->age << ",成绩：" << s->score << endl;
}
int main()
{
	struct student s = { "史加豪",18,0 };
	printStu1(&s);
	return 0;
}