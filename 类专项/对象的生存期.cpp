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
	cout<<"���캯���ѵ��ã����Ϊ"<<string<<endl;
}
A::~A()
{
	cout<<"���������ѵ��ã����Ϊ��"<<string<<endl;
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