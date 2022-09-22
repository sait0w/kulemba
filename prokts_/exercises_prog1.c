#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void pause();
void cls();
int delta_check(float a, float b, float c);

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, b, c;
    a = b = c = 0;
    do{
    cls();
    printf("Fórmula geral da equação do 2º grau: a.xˆ2 + b.x + c\n");
    printf("Insira os valores dos coeficientes 'a', 'b' e 'c' de um polinômio do 2º grau:\n");
    printf("'a': ");
    scanf("%f", &a);
    printf("'b': ");
    scanf("%f", &b);
    printf("'c': ");
    scanf("%f", &c);

    if(delta_check(a, b, c) == 0)
    {
        printf("\nTente novamente..");
        printf("\nAperte qualquer tecla.");
        pause();
    }
    }while(delta_check(a, b, c) == 0);
    printf("\nAs raízes do polinômio são: ");
    printf("%.2f e %.2f", (-b+sqrt(c))/2*a, ((-b-sqrt(c))/2*a)); 
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
  getchar();
}

int delta_check(float a, float b, float c)
{

    if((b*b-4*a*c)<0)
    {
        return 0;
    }
    else
    {
        c = b*b-4*a*c;
        return 1;
    }
}