//ѡ�����򣺴�С��������
#include<iostream>
using namespace std;
int main()
{
	int a[10];
	int N=10;
	for(int i=0;i<10;i++)
		cin>>a[i];
	for(int j=0;j<N-1;j++)
	{
		//�Ӵ�����Ԫ��a[i]~a[n-1]������СֵԪ��
		int min=a[j];
		int k=j;
		for(i=j+1;i<=N+1;i++)
		{
			if(a[i]<min)
			{
				min=a[i];
				k=i;
			}
		}
		swap(a[k],a[j]);
	}
	for(i=0;i<10;i++)
		cout<<a[i]<<" ";
	return 0;
}