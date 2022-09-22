#include <stdio.h>
#include <stdlib.h>

void pause();
void cls();

int main()
{
    cls();
    unsigned int num = 0;
    int rest, base;
    rest = base = 0;
    printf("Insira o número que deseja converter da base 10: ");
    scanf("%d", &num);
    printf("Insira em que deseja exibir o número: ");
    scanf("%d", &base);
    printf("\n");
    while(num>0)
    {
        rest = num % base;
        num /= base;
        printf("%d", rest);
    }
    printf("\n");

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
