#include <stdio.h>;
#include <stdlib.h>
void pause();
void cls();

int main()
{

 return 0;
}

void cls()
{
  printf("\x1B[2J\x1B[H");
}

void pause()
{
  getchar();
}
