#include<iostream>
using namespace std;
int main()
{
	//�û��Զ�����������,�����������͵ļ���
	//�﷨��struct �ṹ���� { �ṹ���Ա�б� };
	//struct �ṹ���� ������
	//1.����ѧ���������ͣ����� ���� ������
	struct Student
	{
		//��Ա�б�:
		//����
		string name;
		//����
		int age;
		//����
		double score;
	}s3;//������,���ڴ��������ź�ͷ;
	//2.ͨ��ѧ�������ʹ�������ѧ��
	//2.1 struct Student s1;
	struct Student s1;
	//ͨ����.�����ʽṹ������е�����;
	s1.name = "����";
	s1.score = 98;
	s1.age = 19;
	cout << "������" << s1.name << "�����䣺" << s1.age << "���ɼ���" << s1.score <<endl;
	//2.2 struct Student s2={...};
	struct Student s2 = { "����", 18, 80 };//һһ��Ӧ
	cout << "������" << s2.name << "�����䣺" << s2.age << "���ɼ���" << s2.score << endl;
	//2.3 ����ṹ��ʱ˳�㴴���ṹ�����;
	s3.name = "����";
	s3.age = 18;
	s3.score = 56;
	cout << "������" << s3.name << "�����䣺" << s3.age << "���ɼ���" << s3.score << endl;
	//��Ҫ��ǰ����
	return 0;
}