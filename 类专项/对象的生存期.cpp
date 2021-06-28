#include<iostream>
#include<string>
using namespace std;
class A
{
public:
	A(char *st);
	~A();
private:
	char string[50];
};
A::A(char *st)
{
	strcpy(string,st);
	cout<<"构造函数已调用，结果为"<<string<<endl;
}
A::~A()
{
	cout<<"析构函数已调用，结果为："<<string<<endl;
}
void fun() 
{  A FunObject("FunObject");
   static A StaticObject("StaticObject");
   cout<<"In fun() "<<endl;
}
void main()
{
	A MainObject("MainObject");
  cout<<"In main(), before called fun() "<<endl;
   fun();
  cout<<"In main(), after called fun() "<<endl;

}