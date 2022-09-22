#include <iostream>
#include <string>
#include <vector>
#include <array>
using namespace std;

void cls();
void pause();
void swap(int *a,int *b);
void dash(int num);
void display(vector <string> *v);
void alter(vector <string> **a);

int main()
{
    cls();
    vector <string> stooges {"Gearry","Larry","Moe"};
    array <int, 3> numarray {1, 2, 3};
    cin >> numarray.at(2);

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

void swap(int *a,int *b)
{
    auto temp = *a;
    *a = *b;
    *b = temp;
}

void dash(int num)
{
    int cont {};
    for(cont=0;cont<num;++cont)
    {
        cout << "-";
    }
  cout <<  endl;
}

void alter(vector <string> **a)
{
    int cou {}, input {};
    cout << "Choose which word to alter: " << endl;
    for(auto cont1 : **a)
    {
      cout << cont1 << "[" << cou << "]" << "\t";
      ++cou;
    }
    cout << endl << "Enter the number referring to that word:";
    cin >> input;
    switch(input)
    {
        case 0:
            cout << "Alter word:";
            cin >> (**a).at(0);
        break;
        case 1:
            cout << "Alter word:";
            cin >> (**a).at(1); 
        break;
        case 2:
            cout << "Alter word:";
            cin >> (**a).at(2);
        break;
    }
}

void display(vector <string> *v)
{
    alter(&v);
    for(auto cont : *v)
        cout << cont << "\t";
    cout << endl << endl;
}