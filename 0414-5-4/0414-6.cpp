#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str[80], temp;
    int i, j, n;
    cout<<"输入字符串的个数: ";
    cin>>n;
    for (i=0; i<n; i++)
	{
        cout<<"输入第"<<i+1<<"个字符串";
        cin>>str[i];
    }
    for(i=0;i<n;i++)
	{
		if(str[i][0]=='C')
		{
			cout<<str[i]<<endl;
		}
	}
    return 0;
}
