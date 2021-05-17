#include<iostream>
#include<string>
#include<fstream>
using namespace std;
struct worker
{
	int uid;
	string name;
	char sex;
	int age;
	int dlen;
	double salary;
	string addr;
}worker01;
int main()
{
	worker w[10];
	cout << "输入10个员工信息：（职工号 职工姓名 性别 年龄 工龄 工资 通讯地址）" << endl;
	for (int i = 0; i < 10; i++)
		cin >> w[i].uid >> w[i].name >> w[i].sex >> w[i].age >> w[i].dlen >> w[i].salary >> w[i].addr;
	cout << "---------------结果为---------------" << endl;
	for (int i = 0; i < 10; i++)
		cout << w[i].uid << " " << w[i].name << " " << w[i].sex << " " << w[i].age << " " << w[i].dlen << " "
		<< w[i].salary << " " << w[i].addr << endl;
	ofstream oFile;
	oFile.open("zhgxx.txt");
	for (int i = 0; i < 10; i++)
		oFile << w[i].uid << " " << w[i].name << " " << w[i].sex << " " << w[i].age << " " << w[i].dlen << " "
		<< w[i].salary << " " << w[i].addr << endl;
	oFile.close();
	ifstream iFile("zhgxx.txt");
	if (!iFile)
		cout << "Open Error！" <<endl;
	worker a[10];
	int n[10];
	while (!iFile.eof())
	{
		for (int i = 0; i < 10; i++)
			iFile >> a[i].uid >> a[i].name >> a[i].sex >> a[i].age >> a[i].dlen >> a[i].salary >> a[i].addr;
	}
	int max=a[0].dlen;
	int k=0;
	for (int i = 0; i < 10; i++)
	{
		if (a[i].dlen > max)
		{
			max = a[i].dlen;
			k = i;
		}
	}
	cout << "工龄最大的：" << endl;
	cout << a[k].uid << " " << a[k].name << " " << a[k].sex << " " << a[k].age << " " << a[k].dlen << " "
		<< a[k].salary << " " << a[k].addr << endl;
	
	
	return 0;
}
