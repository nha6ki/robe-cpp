#include <iostream>
using namespace std;

void ChangeToShohwa(int* p)
{
  if(1926<*p && *p<1989)
    *p-=1925;
  else
    *p=0;
}

int main()
{
  int nYear=1930;
  ChangeToShohwa(&nYear);
  return 0;
}
