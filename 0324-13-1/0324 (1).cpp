#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream outFile("star.txt");
	for(int i=1;i<=8;i++)
	{
		for(int j=1;j<=8-i;j++)
			outFile<<" ";
		for(int k=1;k<=(2*i-1);k++)
			outFile<<"B";
		for(int l=1;l<=8-i;l++)
			outFile<<" ";
		outFile<<endl;
	}
	return 0;
}
