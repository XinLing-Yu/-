#include <iostream>
#include <cmath>
using namespace std;
float x1,x2,delt,p,q;
void dl2(float a,float b) 
 {
	x1=(-b+sqrt(delt))/(2*a);
	x2=(-b-sqrt(delt))/(2*a);
 }

void dl1(float a,float b)
 {
	x1=x2=(-b)/(2*a);
 }

void dl0(float a,float b) 
 {
	p=-b/(2*a);
	q=sqrt(-delt)/(2*a);
 }
int main()
{
 float a,b,c;
 cout<<"input a,b,c:";
 cin>>a>>b>>c;
 delt=b*b-4*a*c;
 if (delt>0)
  {
   dl2(a,b);
   cout<<"x1="<<x1<<",x2="<<x2<<endl;
  }
 else if (delt==0)
  {dl1(a,b);
   cout<<"x1="<<x1<<",x2="<<x2<<endl;
  }
 else
  {dl0(a,b);
   cout<<"x1="<<p<<"+"<<q<<"i"<<endl;
   cout<<"x2="<<p<<"-"<<q<<"i"<<endl;
  }
 return 0;
}

