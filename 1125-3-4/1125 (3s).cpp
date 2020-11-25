#include<iostream>
using namespace std;
int main()
{
    double price,salary;
    salary = 0;
    int j;
    cin >> price;
    j= (int)(price / 100000);
    switch (j) {
    case 0:
        salary = price / 10;
        break;
    case 1:
        salary = 10000 + (price - 100000) * 7.5 / 100;
        break;
    case 2:
    case 3:
        salary = 17500 + (price - 200000) / 20;
        break;
    case 4:
    case 5:
        salary = 27500 + (price - 400000) * 3 / 100;
        break;
    case 6:
    case 7:
    case 8:
    case 9:
        salary = 33500 + (price - 600000) * 1.5 / 100;
        break;
    default:
        salary = 33500 + 400000 * 1.5 / 100 + (price - 1000000) / 100;
        break;
    }
    cout << salary << endl;
}

