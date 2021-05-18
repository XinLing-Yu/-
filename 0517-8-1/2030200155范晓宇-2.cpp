#include<iostream>
using namespace std;
class Test
{
public:
    void init(int a, int b)
    {
        n1 = a;
        n2 = b;
        result = n1 - n2;
    }
    void print()
    {
        cout << "²âÊÔ½á¹û£º" << n1 << "-" << n2 << "=" << result;
    }
private:
    int n1, n2, result;
};
void main()
{
    Test a;
    a.init(68, 55);
    a.print();
}