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
	//���ò�����-> ����ͨ���ṹ��ָ����ʽṹ������
	//����ѧ���ṹ�����
	struct student s = { "����",18,100 };
	//ͨ��ָ��ָ����������ʽṹ������е�����
	struct student* p = &s;
	cout << "Name: " << p->name << ",Age: " << p->age << ",Score: " << p->score << endl;
	return 0;
}