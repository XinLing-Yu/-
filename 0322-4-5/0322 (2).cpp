#include<iostream>
#include<string>
using namespace std;
string c = "";
string b = "";
int main()
{
    void convert(int);
    int m;
    cout << "请输入一个整数:" ;
    cin >> m;
    if (m < 0)
    {
        cout << "-"; 
        m = -m;
    }
    convert(m);
    cout << c <<endl;
    return 0;
}
void convert(int m)
{
    int i;
    if ((i = m / 10) != 0) 
        convert(i); 
    b = m % 10 + 48;
    c = c + b;
}
