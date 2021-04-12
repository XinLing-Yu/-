#include<iostream>
using namespace std;
int main()
{
	int space = 0;
	int capital = 0;
	int lowercase = 0;
	int num = 0;
	int other = 0;
	char a[3][80] = { {"Mr.Johnson had never been up in an aerophane before and he had read a lot about"},
						{" air accidents, so one day when a friend offered to take him for a ride in his "},
						{"won small phane, Mr. Johnson was very worried about accepting. Finally, 1234 56"} };
	cout << "原文：";
	for (int i = 0; i < 3; i++) 
	{
		cout<<a[i];
	}
	cout << endl;
	for (int i = 0; i < 3; ++i) 
	{
		for (int j = 0; j < 80; ++j) 
		{
			if (a[i][j] == ' ') 
			{
				space++;
			}
			else if (a[i][j] > 64 && a[i][j] < 91) 
			{
				capital++;
			}
			else if (a[i][j] > 96 && a[i][j] < 123) 
			{
				lowercase++;
			}
			else if (a[i][j] > 47 && a[i][j] < 58) 
			{
				num++;
			}
			else if (a[i][j] != '\0') 
			{
				other++;
			}
		}
	}
	cout << "大写字母个数：" << capital << " 小写字母个数：" << lowercase << " 空格个数：" << space << " 其它字符个数：" << other << endl;
	return 0;
}