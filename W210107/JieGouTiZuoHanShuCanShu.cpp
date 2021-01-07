#include<iostream>
using namespace std;
struct student
{
	string name;
	int age;
	double score;
};
//打印学生信息的函数：
//1.值传递
void printStu1(struct student s)
{
	cout << "子函数中1输出：学生姓名：" << s.name << ",年龄：" << s.age << ",成绩：" << s.score << endl;
}
//2.地址传递
void printStu2(struct student * s)
{
	s->age = 1000;
	cout << "子函数2中输出：学生姓名：" << s->name << ",年龄：" << s->age << ",成绩：" << s->score << endl;
}
int main()
{
	//结构体做函数参数
	//将学生传入到一个参数中，打印学生上的所有信息
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 86;
	cout << "Main函数中输出：学生姓名：" << s.name << ",年龄：" << s.age << ",成绩：" << s.score << endl;
	printStu1(s);
	printStu2(&s);
	return 0;
}