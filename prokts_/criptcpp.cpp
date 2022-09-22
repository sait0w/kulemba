#include <iostream>
#include <string>
#include <vector>
#include <ctime>
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
    
 return 0;
}

void cls()
{
  std::cout << "\x1B[2J\x1B[H";
}

void pause()
{
 cin.sync();
 cin.get();
}
