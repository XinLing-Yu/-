#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
int main()
{
	ofstream outF("a.txt"); 
	int a[100][100]={0},n,x=1;
	 cout<<"�������Ľ���n��";
	 cin>>n;
	 int i,j,k;
	 for(k=0;k<(n+2)/3;k++) //���ƴ���
	 {
	  for(i=k,j=k;j<n-2*k;j++)//����ÿ��ѭ���ĵ�һ��
		  a[i][j]=x++;
	  for(i=k+1,j=n-2*k-2;i<n-2*k;i++,j--)//���Ʋ��
		  a[i][j]=x++;
	  for(j=k,i=n-2*k-2;i>=k+1;i--)//�������
		  a[i][j]=x++;
	 }
	 for(i=0;i<n;i++)
	 {
	  for(j=0;j+i<n;j++)
		  outF<<left<<setw(5)<<a[i][j];
			outF<<endl;
	 }
 return 0;
}
