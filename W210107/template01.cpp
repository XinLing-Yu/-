/*案例描述：
学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
最终打印出老师数据以及老师所带的学生数据。*/
#include<iostream>
#include<ctime>
using namespace std;
struct student
{
	string name;
	int score;
};
struct teacher
{
	string name;
	struct student sArray[5];
};
//给老师和学生赋值的函数
void FuZhi(teacher tArray[],int len)
{
	string nameSeed = "ABCDE";
	//给老师赋值
	for (int i = 0; i < len; i++)
	{
		tArray[i].name = "Teacher_";
		tArray[i].name += nameSeed[i];
		//给学生
		for (int j = 0; j < 5; j++)
		{
			tArray[i].sArray[j].name = "Student_";
			tArray[i].sArray[j].name += nameSeed[j];
			int random = rand() % 61 + 40; //40~100
			tArray[i].sArray[j].score = random;
		}
	}
}
void printInfo(teacher tArray[],int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "老师姓名：" << tArray[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout <<'\t'<< "学生姓名：" << tArray[i].sArray[j].name << ",分数：" << tArray[i].sArray[j].score << endl;
		}
	}
}
int main()
{
	//随机数种子
	srand((unsigned int)time(NULL));
	//1.创建3名老师的数组
	teacher tArray[3];
	//2.通过函数给3名老师的信息赋值，并给老师带的学生赋值
	int len = sizeof(tArray) / sizeof(tArray[0]);
	FuZhi(tArray, len);
	//3.打印信息
	printInfo(tArray, len);
	return 0;
}