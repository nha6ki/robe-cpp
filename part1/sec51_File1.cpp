#include <stdio.h>

int main()
{
  FILE* pFile;

  pFile = fopen("test.txt","w");
  fputs("a",pFile);
  fclose(pFile);

  return 0;
}
