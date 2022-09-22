#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using std::cout;
using std::cin;
using std::string;
using std::vector;
using std::endl;

void cls();
void pause();
void menu(int *dvnd, int *dvsr);
void put_wrong_value(int *dvnd, int *dvsr);

int main()
{
   cls();
   int dvnd{}, dvsr{};
   menu(&dvnd, &dvsr);

   return 0;
}

void cls()
{
   system("clear");
}

void pause()
{
   cin.sync();
   cin.get();
}

void menu(int *dvnd, int *dvsr)
{
   *dvnd = 0;
   *dvsr = 0;

   cout << "Digite o módulo do dividendo (maior que zero): ";
   cin >> *dvnd;
   cout << "Digite o módulo do divisor (maior ou igual a 1): ";
   cin >> *dvsr;
   put_wrong_value(&*dvnd, *&dvsr);
}

void put_wrong_value(int *dvnd, int *dvsr)
{
   if(*dvnd < 0 || *dvsr <= 0)
   {
      cout << "Valores de entrada inválidos.\n"
           << "Repita o processo.." << endl;
      cls();
      menu(&*dvnd, &*dvsr);
   }
}