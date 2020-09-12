#include <iostream>
using namespace std;

#define FLEM(array) (sizeof(array)/sizeof*(array))

int main()
{
  int nFibo[10];
  cout << FLEM(nFibo) << endl;

  return 0;
}
