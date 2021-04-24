#include<iostream>
using namespace std;
void a(char *ch, int n)
{
	*ch += n;
}
int main()
{
	char ch,*p;
	int n;
	cout << "输入字符：";
	cin>>ch;
	cout << "改为其后第n个：";
	cin >> n;
	p = &ch;
	a(p,n);
	cout << "其后第" << n << "个字符为：" << ch << endl;
	return 0;
}