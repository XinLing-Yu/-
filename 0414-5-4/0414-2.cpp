#include <iostream>
using namespace std;
int main()
{	
	char a[100];
	int i; 
	gets(a);
	cout<<"����ǰ��"<<a<<endl;
	for(i=0;a[i]!='\0';i++){
		if(a[i]>='A'&&a[i]<='Z'){
			a[i] = 27-a[i]+128;
		}else if(a[i]>='a'&&a[i]<='z'){
			a[i] = 27-a[i]+192;
		}
	}
	cout<<"���ܺ�"<<a<<endl;
	return 0;
}
