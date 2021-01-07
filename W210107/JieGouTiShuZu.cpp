#include<iostream>
#include<string>
using namespace std;
//语法:struct 结构体名 数组名[元素个数]={{},{},...,{}};
	//1.定义结构体
struct Student
{
	//姓名
	string name;
	//年龄
	int age;
	//分数
	int score;
};
int main()
{	
	//2.创建结构体数组
	Student stuArray[3] =
	{
		{"张三",18,100},
		{"李四",19,98},
		{"王五",17,87}
	};
	//3.给结构体数组中的元素赋值
	stuArray[2].name = "赵六";
	//4.遍历结构体数组
	for (int i = 0; i < 3; i++)
	{
		cout << "Name:" << stuArray[i].name << ",age:" << stuArray[i].age << ",score:" << stuArray[i].score << endl;
	}
	return 0;
}