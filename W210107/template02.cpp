/*����������
���һ��Ӣ�۵Ľṹ�壬������Ա���������䣬�Ա�; �����ṹ�����飬�����д��5��Ӣ�ۡ�
ͨ��ð��������㷨���������е�Ӣ�۰���������������������մ�ӡ�����Ľ����
����Ӣ����Ϣ���£�
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},*/
#include<iostream>
using namespace std;
struct hero
{
	string name;
	int age;
	string sex;
};
void PaiXu(struct hero hArray[],int len)
{
	for (int i = 0; i < len - 1; i++)
	{
		for (int j = 0; j < len - 1 - i; j++)
		{
			if (hArray[j].age > hArray[j + 1].age)
			{
				hero temp = hArray[j];
				hArray[j] = hArray[j + 1];
				hArray[j + 1] = temp;
			}
		}
	}
}
void printHero(struct hero hArray[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << "������ " << hArray[i].name << " �Ա� " << hArray[i].sex << " ���䣺 " << hArray[i].age << endl;
	}
}
int main()
{
	struct hero hArray[5] =
	{
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"}
	};
	int len = sizeof(hArray) / sizeof(hero); 
	PaiXu(hArray, len);
	printHero(hArray, len);
	return 0;
}