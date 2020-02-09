#include <stdio.h>

int main()
{
char str[5] = "abcd";
  int len;

  len = 0;
  while (str[len++] != '\0')
  printf("%i", len);
  return (0);
}
