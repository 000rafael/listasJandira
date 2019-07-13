#include <stdio.h>

int main()
{
  char ascii;
  for(int i = 0; i < 256l; i++)
  {
    ascii = i;
    printf("DEC: %d ASCII: %c\n", i, ascii);
  }
}
