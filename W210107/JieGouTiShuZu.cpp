#include<iostream>
#include<string>
using namespace std;
//�﷨:struct �ṹ���� ������[Ԫ�ظ���]={{},{},...,{}};
	//1.����ṹ��
struct Student
{
	//����
	string name;
	//����
	int age;
	//����
	int score;
};
int main()
{	
	//2.�����ṹ������
	Student stuArray[3] =
	{
		{"����",18,100},
		{"����",19,98},
		{"����",17,87}
	};
	//3.���ṹ�������е�Ԫ�ظ�ֵ
	stuArray[2].name = "����";
	//4.�����ṹ������
	for (int i = 0; i < 3; i++)
	{
		cout << "Name:" << stuArray[i].name << ",age:" << stuArray[i].age << ",score:" << stuArray[i].score << endl;
	}
	return 0;
}