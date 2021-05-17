/*2.读入文件"student.data"中所有学生的信息，每个学生包括学号、姓名、性别、年龄、三门课程成绩。
编写函数compute,计算每个学生的总分和平均分，再定义函数sort按照平均成绩从高到低进行排序，
定义函数fwrite将每个学生的上述信息再加上计算得到的总分和平均分按名次写入到新的文件"studentscore.data"。*/
#include<iostream>
#include<fstream>
using namespace std;
struct student
{
	char num[10];
	char name[10];
	char sex;
	int age;
	double A1;
	double A2;
	double A3;
	double sum;
	double average;
};
int main()
{
	cout << "please input n:" << endl;
	int n;
	double average[100] = { 0 }, sum[100] = {0};
	cin >> n;
	student* p= new student[n],*pp;
	pp = p;
	cout << "please input data num name sex age A1 A2 A3:" << endl;
	for (; p < pp + n; p++)
		cin >> p->num >> p->name >> p->sex >> p->age >> p->A1 >> p->A2 >> p->A3;
	p = pp;
	void compute(student*,double *,double *,int);
	compute(pp, sum, average, n);
	for (int i = 0; i < n; i++,p++)
	{
		p->sum = sum[i];
		p->average = average[i];
	}
	void sort(student *,int );
	sort(pp,n);
	cout << endl;
	for (p=pp; p < pp + n; p++)
		cout << p->num <<" "<<p->name<<" "<<p->sex<<" "<<p->age<<" "<<p->A1<<" "<<p->A2<<" "<<p->A3<< endl;
	void fwrite(student*, int);
	fwrite(pp, n);
	delete[] p;
	return 0;
}
void compute(student* p,double * sum,double * average,int n)
{
	for (int i=0;i<n; p++,i++)
	{
		sum[i] = p->A1 + p->A2 + p->A3;
		average[i] = sum[i] / 3;
	}
}
void sort(student *p,int n)
{
	student* ppp; 
	for (int i = 1; i < n; i++)
		for (ppp = p; ppp < p + n - i; ppp++)
			if (ppp->average < (*(ppp + 1)).average)
				swap(*ppp, *(ppp + 1));
}
void fwrite(student* p, int n)
{
	student* pppp=p;
	ofstream outfile;
	outfile.open("studentscore.dat");
	if (!outfile)
	{
		cout << "open error" << endl;
		exit(1);
	}
	for (; p < pppp + n; p++)
		outfile << p->num << " " << p->name << " " << p->sex << " " << p->age << " " << p->A1 << " " << p->A2 << " " << p->A3 << endl;
	outfile.close();
}