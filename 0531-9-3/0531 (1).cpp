#include <iostream>
using namespace std;
class Myclass
{public:
      void func();
      static int  sfunc1();
      static void sfunc2(Myclass &r);
private:
      int a;
     static int b;
};
int Myclass::b=5;
void Myclass::func()
{b=10;
}
