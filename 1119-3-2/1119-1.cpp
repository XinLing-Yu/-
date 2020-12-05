#include<iostream>
using namespace std;
int main()
{
	int h;
	double sw;
	cout<<"输入身高（cm）:"; 
	cin>>h;
	sw=h-100-((h-150)/4);
	cout<<"标准体重为："<<sw<<"kg"<<endl;
	return 0;
}
