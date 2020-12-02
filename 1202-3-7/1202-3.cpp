#include <iostream>
using namespace std;
int main()
{
    char c;
    int a, space, num, o;
    for (a = 0, space = 0, num = 0, o = 0; (c = getchar()) != '\n'; ) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) a++;
        else if (c == ' ' || c == '\t') space++;
        else if (c >= '0' && c <= '9') num++;
        else o++;
    }
    cout << "字母= " << a << " 空格= " << space << " 数字= " << num << " 其他字符= " << o << endl;
    system("pause");
    return 0;
}