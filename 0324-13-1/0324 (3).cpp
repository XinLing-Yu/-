#include<iostream>
#include<fstream>
using namespace std;
int isShuix(int n);
int main()
{
	ofstream outFile("shuixian.txt");
	for(int i=100;i<1000;i++)
	{
		if(isShuix(i))
			outFile<<i<<endl;
	}
	outFile.close();
	return 0;
}
int isShuix(int n)
{
	int a=n/100;
	int b=n/10%10;
	int c=n%10;
	return a*a*a+b*b*b+c*c*c==n;
}