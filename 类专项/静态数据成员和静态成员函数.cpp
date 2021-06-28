#include <iostream>
using namespace std;
class Goods
{public:
    Goods(int w);
    ~Goods();
    int Weight();
    static int TotalWeight();
  private:
    int weight;
    static int totalWeight;
};
Goods::Goods(int w)
{
	weight=w;
    totalWeight+=w;
}
Goods::~Goods()
{
    totalWeight-=weight;
	cout<<totalWeight<<endl;
}
int Goods::Weight()
{
    return weight;
}
int Goods::TotalWeight()
{
    return totalWeight;
}
int Goods::totalWeight=0;
void main()
{
    int w;
    cin>>w;
    Goods g1(w);
    cin>>w;
    Goods g2(w);
    cout<<Goods::TotalWeight()<<endl;
}
