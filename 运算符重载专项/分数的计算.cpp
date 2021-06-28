#include<iostream>
using namespace std;
class fraction
{
public:
	fraction(int=0,int=1);//构造函数
	int getabove();
	int getbelow();
	fraction add(fraction &secondfraction);
	void display();//显示分数
private:
	int above;
	int below;
	int gcd(int n,int m);//最大公约数
};
fraction::fraction(int a,int b)
{
	int factor=gcd(a,b);
	this->above=(b>0?1:-1)*a/factor;
	this->below=abs(b)/factor;
}
int fraction::getabove()
{
	return above;
}
int fraction::getbelow()
{
	return below;
}
int fraction::gcd(int n,int m)
{
	int n1=abs(n);
	int n2=abs(m);
	int gcd=1;
	for(int i=1;i<=n1&&i<=n2;i++)
	{
		if((n1%i==0)&&(n2%i==0))
			gcd=i;
	}
	return gcd;
}
void fraction::display()
{
	cout<<above<<"/"<<below;
}
fraction fraction::operator+(fraction &secondfraction)
{
	int n=above*secondfraction.below+below*secondfraction.above;
	int m=below+secondfraction.below;
	return fraction(n,m);
}
int main()
{
	fraction f1(4,2);
	fraction f2(2,3);
	fraction f3;
	//f3=f1.add(f2);
	f3=f1+f2;
	f1.display();
	cout<<"+";
	f2.display();
	cout<<"=";
	f3.display();
	cout<<endl;
	return 0;
}