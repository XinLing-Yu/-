#include<iostream>
#include<string>
using namespace std;
class person
{
public:
	person(string name,char sex,int age)
	{
		this->name=name;
		this->sex=sex;
		this->age=age;
	}
	~person()
	{}
	void showPerson()
	{
		cout<<name<<","<<sex<<","<<age;
	}
//private:
	int age;
	string name;
	char sex;
};
class student:public person
{
public:
	student(string name,char sex,int age,int id,double eng):person(name,sex,age)
	{
		this->id=id;
		this->eng=eng;
	}
	~student()
	{}
	void showStudent()
	{
		cout<<id<<","<<eng;
	}
private:
	double eng;
	int id;
};
int main()
{
	student s1("LiHua",'F',19,302155,87);
	s1.showPerson();
	s1.showStudent();
	cout<<endl;
	return 0;
}