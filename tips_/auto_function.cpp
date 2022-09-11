#include <iostream>
#include <string>
#include <vector>
const int bob = 99;

void cls();
void pause();

int main()
{
//  Relationship between pointers and arrays
    int numarray[] = {1, 2 ,3};
    int *pointer {numarray};
    char charray[] {"whatever word"};

        for(auto cont1 : charray)
        {
          std::cout << cont1 << std::endl;
        }
        std::cout << charray << std::endl;

        for(int cont {};cont<1;++cont)
        {
        // Prints the first section of the numarray
            std::cout << *pointer << std::endl;  
        // The numarray with the specified [cont] acts as a pointer
        // in this case it prints put the numarray[0]
            std::cout << numarray[cont] << std::endl;
        // "std::cout << numarray" is equivalent to "std::cout << pointer"
        // which prints out the address of numarray
            std::cout << numarray << std::endl;
        }

 return 0;
}

void cls() 
{
system("clear");
}

void pause()
{
 std::cin.sync();
 std::cin.get();
}