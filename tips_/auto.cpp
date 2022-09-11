#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

void cls();
void pause();
void print_dash(int num);

int main()
{
    cls();
    size_t cont {};
    int arr[2][2] {{2, 2},{2, 2}};
     for(auto &cont1 : arr)
     {
       for(auto &cont2 : cont1)
       {
         cout << cont2 << endl;
       }
     }
    

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

void print_dash(int num)
{
    int cont{};
    for (cont = 0; cont < num; ++cont)
    {
        cout << "-";
    }
    cout << endl;
}