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
    for (i=0; i<n; i++)
        for (j=i+1; j<n; j++)
            if (str[i]>str[j])
			{
                swap(str[i],str[j]);
            }
	cout<<"�����"<<endl;
    for (i=0; i<n; i++)
	{
		cout<<str[i]<<endl;
	}
    return 0;
}
