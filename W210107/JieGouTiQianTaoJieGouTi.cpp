#include<iostream>
using namespace std;
struct student //嵌套在里面的结构体要先定义！！
{
	string name;
	int age;
	double score;
};
struct teacher
{
	int id;
	string name;
	int age;
	struct student stu;//辅导的学生
};
int main()
{
	//结构体嵌套结构体
	//创建老师
	struct teacher t;
	t.id = 2000302011;
	t.age = 34;
	t.name = "张老师";
	t.stu.name = "李同学";
	t.stu.age = 21;
	t.stu.score = 85;
	cout << "老师的姓名：" << t.name << ",老师的工号：" << t.id << ",老师的年龄：" << t.age << ",老师辅导的学生:" << t.stu.name << endl;
	cout << "学生年龄:" << t.stu.age << ",学生成绩:" << t.stu.score << endl;
	return 0;
}