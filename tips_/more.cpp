#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <new>
using namespace std;

void cls();
void pause();

int main()
{
    cls();
    int tam{3};
    array<int, 3> numarray{};
    for (int i{}; i < numarray.size(); ++i)
    {
        cout << "Insira o valor deseajdo: ";
        cin >> numarray[i];
    }

    array<int, 4> *nov_point = new array<int, 4>;
    int run {};
    for (auto cont1 : *nov_point)
    {
        if(run == 4)
        {
            (*nov_point).at(run) = -1;
        }else
        {
            (*nov_point).at(run) = numarray.at(run);
            ++run;
        }
        
    }

    while(*nov_point!=-1)
    {
        cout << *(nov_point++) << endl;
    }

    for (auto cont1 : numarray)
    {
        cout << cont1 << endl;
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

void function(const vector<int> *const pointer)
{
}