/*案例描述：
设计一个英雄的结构体，包括成员姓名，年龄，性别; 创建结构体数组，数组中存放5名英雄。
通过冒泡排序的算法，将数组中的英雄按照年龄进行升序排序，最终打印排序后的结果。
五名英雄信息如下：
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},*/
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
		cout << "姓名： " << hArray[i].name << " 性别： " << hArray[i].sex << " 年龄： " << hArray[i].age << endl;
	}
}
int main()
{
	struct hero hArray[5] =
	{
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"}
	};
	int len = sizeof(hArray) / sizeof(hero); 
	PaiXu(hArray, len);
	printHero(hArray, len);
	return 0;
}