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
    cout << "��ĸ= " << a << " �ո�= " << space << " ����= " << num << " �����ַ�= " << o << endl;
    system("pause");
    return 0;
}