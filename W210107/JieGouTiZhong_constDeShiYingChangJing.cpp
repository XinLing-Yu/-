#include<iostream>
using namespace std;
struct student
{
	string name;
	int age;
	int score;
};
void printStu1(const struct student* s) //const��ֹ���޸Ĳ���
{
	cout << s-> name << ",���䣺" << s->age << ",�ɼ���" << s->score << endl;
}
int main()
{
	struct student s = { "ʷ�Ӻ�",18,0 };
	printStu1(&s);
	return 0;
}