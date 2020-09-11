#include <iostream>
using namespace std;

#define FUNC(name) void name(int x, int y)

FUNC(Func);

int main(){
  Func(1,2);
  Func(158,144);
  return 0;
}

FUNC(Func)
{
  cout << x+y << endl;
}
