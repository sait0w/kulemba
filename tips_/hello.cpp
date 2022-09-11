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

int main()
{
    cls();
 cout << "hello";
 cout << endl;
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