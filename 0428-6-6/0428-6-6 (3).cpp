#include<iostream>
using namespace std;
void sMax(int a[][100],int N)
{
	int i,j,max=0,maxi=0,maxj=0;
	max=a[0][0];
	for(i=0;i<N;i++)
	  for(j=0;j<N;j++)
	   if(a[i][j]>max)
	   {
		max=a[i][j];
		maxi=i;maxj=j;
	   }
	   cout<<"��ά������Ԫ�����ֵ��:"<<max<<","<<"�±���("<<maxi<<","<<maxj<<")"<<endl;
}
int main()
{
	int a[100][100];
	int n;
	cout<<"������������";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	sMax(a,n);
	return 0;

}