#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

void cls();
void pause();
void swap(int *a,int *b);
void dash(int num);
void display(vector <string> *v);

int main()
{
    cls();
    vector <string> stooges {"Larry","Moe","Garry"};
    display(&stooges);

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

void display(vector <string> *v)
{
    for(auto cont : *v)
        cout << cont << "\t";
    cout << endl;
}