/*����������
ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�*/
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
//����ʦ��ѧ����ֵ�ĺ���
void FuZhi(teacher tArray[],int len)
{
	string nameSeed = "ABCDE";
	//����ʦ��ֵ
	for (int i = 0; i < len; i++)
	{
		tArray[i].name = "Teacher_";
		tArray[i].name += nameSeed[i];
		//��ѧ��
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
		cout << "��ʦ������" << tArray[i].name << endl;
		for (int j = 0; j < 5; j++)
		{
			cout <<'\t'<< "ѧ��������" << tArray[i].sArray[j].name << ",������" << tArray[i].sArray[j].score << endl;
		}
	}
}
int main()
{
	//���������
	srand((unsigned int)time(NULL));
	//1.����3����ʦ������
	teacher tArray[3];
	//2.ͨ��������3����ʦ����Ϣ��ֵ��������ʦ����ѧ����ֵ
	int len = sizeof(tArray) / sizeof(tArray[0]);
	FuZhi(tArray, len);
	//3.��ӡ��Ϣ
	printInfo(tArray, len);
	return 0;
}