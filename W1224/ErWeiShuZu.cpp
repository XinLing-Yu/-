#include<iostream>
using namespace std;
int main()
{
	//DingYi:
	//type name[h][w]={{h1,h2},{w1,w2}};
	int arr[2][3] = { {2,3},{1,4,5} };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
	system("pause");
}