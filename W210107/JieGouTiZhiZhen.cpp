#include<iostream>
using namespace std;
struct student
{
	string name;
	int age;
	double score;
};
int main()
{
	//利用操作符-> 可以通过结构体指针访问结构体属性
	//创建学生结构体变量
	struct student s = { "张三",18,100 };
	//通过指针指向变量并访问结构体变量中的数据
	struct student* p = &s;
	cout << "Name: " << p->name << ",Age: " << p->age << ",Score: " << p->score << endl;
	return 0;
}