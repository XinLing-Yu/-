#include<iostream>
using namespace std;
struct student
{
	string name;
	int age;
	double score;
};
//��ӡѧ����Ϣ�ĺ�����
//1.ֵ����
void printStu1(struct student s)
{
	cout << "�Ӻ�����1�����ѧ��������" << s.name << ",���䣺" << s.age << ",�ɼ���" << s.score << endl;
}
//2.��ַ����
void printStu2(struct student * s)
{
	s->age = 1000;
	cout << "�Ӻ���2�������ѧ��������" << s->name << ",���䣺" << s->age << ",�ɼ���" << s->score << endl;
}
int main()
{
	//�ṹ������������
	//��ѧ�����뵽һ�������У���ӡѧ���ϵ�������Ϣ
	struct student s;
	s.name = "����";
	s.age = 20;
	s.score = 86;
	cout << "Main�����������ѧ��������" << s.name << ",���䣺" << s.age << ",�ɼ���" << s.score << endl;
	printStu1(s);
	printStu2(&s);
	return 0;
}