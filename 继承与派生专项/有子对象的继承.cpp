#include<iostream>
#include<string>
using namespace std;
class person
{
public:
	person(string name,int age,char sex)
	{
		this->name=name;
		this->age=age;
		this->sex=sex;
	}
	showPerson()
	{
		cout<<name<<","<<age<<","<<sex<<endl;
	}

protected:
	string name;
	int age;
	char sex;
};
class student:public person
{
public:
	student(string name,int age,char sex,int id,int eng,string tname,int tage,char tsex):person(name,age,sex),teacher(tname,tage,tsex)
	{
		this->id=id;
		this->eng=eng;
	}
	showInf()
	{
		cout<<name<<","<<age<<","<<sex<<","<<id<<","<<eng<<endl;
		teacher.showPerson();
	}
	
private:
	int id;
	int eng;
	person teacher;
};
int main()
{
	student s1("Li",18,'F',2030011,80,"Wang",30,'M');
	s1.showInf();
	
	
	return 0;
}