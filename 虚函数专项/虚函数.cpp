#include <iostream>
#include <string>
using namespace std;
class Person
{
	protected:
		string name;
		int age;
		char sex;
	public:
		Person(string name,int age,char sex)
		{
			this->name = name;
			this->age = age;
			this->sex = sex;
		}
		~Person(){}
		virtual void showInfo()
		{
			cout<<"name:"<<name<<endl;
			cout<<"sex:"<<sex<<endl;
			cout<<"age:"<<age<<endl<<endl;
		}
};
class Student:public Person
{
	private:
		string number;
		int phi,eng,comp;
	public:
		Student(string name,int age,char sex,string number,int phi,int eng,int comp):Person(name,age,sex)
		{
			this->number = number;
			this->phi = phi;
			this->eng = eng;
			this->comp = comp;
		}
		void showInfo()
		{
			cout<<"name:"<<name<<endl;
			cout<<"sex:"<<sex<<endl;
			cout<<"age:"<<age<<endl;
			cout<<"number:"<<number<<endl;
			cout<<"phi:"<<phi<<endl;
			cout<<"eng:"<<eng<<endl;
			cout<<"comp:"<<comp<<endl<<endl;
		}
};
int main()
{
	Person pers("Zhai",40,'F');
	Student stu("Li",21,'F',"09509500",89,86,95);
	Person *pt = &pers;
	pt->showInfo( );                 
	pt = &stu;                     
	pt->showInfo( );                 
	return 0;
}
