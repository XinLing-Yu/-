#include <iostream>
using namespace std;
int main() {
    int i, j;
    int line = 0;
    cin>>line;
    for (i = 0; i < line; i++) {
        for (j = 0; j <= i + line - 1; j++) {
            if (i + j >= line - 1)
                cout<<"1 ";
            else
                cout<<"  ";
        }
        cout<<"\n";
    }
    system("pause");
    return 0;
}
