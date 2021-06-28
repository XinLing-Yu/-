#include<iostream>
#include<string>
using namespace std;
class Employee
{
protected:
	string No,Name;
public:
	Employee(string No,string Name)
	{
		this->No=No;
		this->Name=Name;
	}
	double getPay()
	{
		return 1000;
	}
	string getName()
	{
		return this->Name;
	}
	string getNo()
	{
		return this->No;
	}
};
class CommissionWorker:public Employee
{
private:
	double salary,commission,sellValue;
public:
	CommissionWorker(string No,string Name,double s,double c,double sv):Employee(No,Name)
	{
		salary=s;
		commission=c;
		sellValue=sv;
	}
	double getPay()
	{
		return ((this->salary)+(sellValue*commission));
	}
};
class HourlyWorker:public Employee
{
private:
	double wages,hours;
public:
	HourlyWorker(string No,string Name,double w,double h):Employee(No,Name)
	{
		wages=w;
		hours=h;
	}
	double getPay()
	{
		if((this->hours)>40)
			return 1.5*((this->hours)*wages);
		else
			return (this->hours)*wages;
	}
};
class PieceworkWorker:public Employee
{
private:
	double wages;
	int quantity;
public:
	PieceworkWorker(string No,string Name,double w,int q):Employee(No,Name)
	{
		wages=w;
		quantity=q;
	}
	double getPay()
	{
		return wages*quantity;
	}
};
int main()
{	
	CommissionWorker c1("003801","Li",1000,0.2,500);
	cout << "工号：" << c1.getNo() << "姓名：" << c1.getName() << "薪水：" << c1.getPay() << endl;
	HourlyWorker h1("003811","Wang",100,70);
	HourlyWorker h2("003812","Wu",100,30);
	PieceworkWorker p1("003821", "Zhang", 67, 60);
	HourlyWorker* hp = &h1;
	cout << "工号：" << hp->getNo() << "姓名：" << hp->getName() << "薪水：" << hp->getPay() << endl;
	hp = &h2;
	cout << "工号：" << hp->getNo() << "姓名：" << hp->getName() << "薪水：" << hp->getPay() << endl;
	PieceworkWorker* pwp = &p1;
	cout << "工号：" << pwp->getNo() << "姓名：" << pwp->getName() << "薪水：" << pwp->getPay() << endl;
	return 0;
}