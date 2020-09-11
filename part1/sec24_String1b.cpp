#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int i;
  char szHello[] = "やあ、こんちは";

  for(i=0; i<strlen(szHello); i++)
    cout << (int)(unsigned char)szHello[i] << ",";
  cout << (int)(unsigned char)szHello[strlen(szHello)+1] << endl;

  return 0;
}
