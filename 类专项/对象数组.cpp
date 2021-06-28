#include<iostream>
using namespace std;
class Box
{
public:
	Box(int l,int w,int h)
	{
		length=l;
		width=w;
		height=h;
	}
	int volume()
	{
		return length*width*height;
	}
private:
	int length,width,height;
};
void main()
{
	Box b[3]={Box(10,30,20),Box(10,15,50),Box(20,30,40)};
	for(int i=0;i<3;i++)
	{
		cout<<b[i].volume()<<endl;
	}
}