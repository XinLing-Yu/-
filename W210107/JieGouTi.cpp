#include<iostream>
using namespace std;
int main()
{
	//用户自定义数据类型,内置数据类型的集合
	//语法：struct 结构体名 { 结构体成员列表 };
	//struct 结构体名 变量名
	//1.创建学生数据类型（姓名 年龄 分数）
	struct Student
	{
		//成员列表:
		//姓名
		string name;
		//年龄
		int age;
		//分数
		double score;
	}s3;//第三种,跟在创建大括号后头;
	//2.通过学生的类型创建具体学生
	//2.1 struct Student s1;
	struct Student s1;
	//通过“.”访问结构体变量中的属性;
	s1.name = "张三";
	s1.score = 98;
	s1.age = 19;
	cout << "姓名：" << s1.name << "，年龄：" << s1.age << "，成绩：" << s1.score <<endl;
	//2.2 struct Student s2={...};
	struct Student s2 = { "李四", 18, 80 };//一一对应
	cout << "姓名：" << s2.name << "，年龄：" << s2.age << "，成绩：" << s2.score << endl;
	//2.3 定义结构体时顺便创建结构体变量;
	s3.name = "王五";
	s3.age = 18;
	s3.score = 56;
	cout << "姓名：" << s3.name << "，年龄：" << s3.age << "，成绩：" << s3.score << endl;
	//主要用前两种
	return 0;
}