#include<iostream>
using namespace std;
//全局变量
int g_a = 10;
int g_b = 10;
//const修饰的全局常量
const int c_g_a = 10;
const int c_g_b = 10;
int main()
{
	//全局区

	//创建普通局部变量
	int a = 10;
	int b = 10;
	//静态变量
	static int s_a = 10;
	static int s_b = 10;
	cout << "a的地址为：" << int(&a) << endl;
	cout << "b的地址为：" << int(&b) << endl;
	cout << "g_a的地址为：" << int(&g_a) << endl;
	cout << "g_b的地址为：" << int(&g_b) << endl;
	cout << "静态变量s_a的地址为：" << int(&s_a) << endl;
	cout << "静态变量s_b的地址为：" << int(&s_b) << endl;
	//字符串常量
	cout << "字符串常量地址为：" << int(&"Hello World C++") << endl;
	cout << "const修饰的c_g_a的地址为：" << int(&c_g_a) << endl;
	cout << "const修饰的c_g_b的地址为：" << int(&c_g_b) << endl;
	//const修饰的局部变量
	const int c_l_a = 10;
	const int c_l_b = 10;
	cout << "const修饰的c_l_a的地址为：" << int(&c_l_a) << endl;
	cout << "const修饰的c_l_a的地址为：" << int(&c_l_a) << endl;
	system("pause");
	return 0;
}