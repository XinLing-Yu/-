#include<iostream>
using namespace std;
struct student //Ƕ��������Ľṹ��Ҫ�ȶ��壡��
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
	struct student stu;//������ѧ��
};
int main()
{
	//�ṹ��Ƕ�׽ṹ��
	//������ʦ
	struct teacher t;
	t.id = 2000302011;
	t.age = 34;
	t.name = "����ʦ";
	t.stu.name = "��ͬѧ";
	t.stu.age = 21;
	t.stu.score = 85;
	cout << "��ʦ��������" << t.name << ",��ʦ�Ĺ��ţ�" << t.id << ",��ʦ�����䣺" << t.age << ",��ʦ������ѧ��:" << t.stu.name << endl;
	cout << "ѧ������:" << t.stu.age << ",ѧ���ɼ�:" << t.stu.score << endl;
	return 0;
}