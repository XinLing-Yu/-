#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str[80], temp;
    int i, j, n;
    cout<<"�����ַ����ĸ���: ";
    cin>>n;
    for (i=0; i<n; i++)
	{
        cout<<"�����"<<i+1<<"���ַ���";
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
