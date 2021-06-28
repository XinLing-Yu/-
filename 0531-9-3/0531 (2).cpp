#include<iostream>
using namespace std;
class gCase
{
public:
	gCase(int n,int q,double p)
	{
		num = n;
		quantity = q;
		price = p;
	}
	
	static double sum(gCase x)
	{
		if (x.quantity < 10)
			return x.quantity * (x.price * discount);
		else
			return x.quantity * (0.98 * discount * x.price);
	}
	double average(gCase x)
	{
		return sum(x) / x.quantity;
	}
	void put_inf(gCase x)
	{
		
		
		cout << "销售员号：" << x.num << "，" << "销售件数：" << x.quantity << "，销货单价：" << x.price 
			<< "，总销售款：" << sum(x) << "，平均单价：" << average(x) << endl;
	}
private:
	static double discount;
	double price;
	int quantity,num;
};
double gCase::discount = 0.8;
int main()
{
	gCase a[3] = { 
		gCase(101,5,23.5),
		gCase(102,12,24.56),
		gCase(103,100,21.5) 
	};
	for (int i = 0; i < 3; i++)
	{
		a[i].put_inf(a[i]);
	}
	return 0;
}