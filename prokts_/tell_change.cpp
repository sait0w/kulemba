#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

void cls();
void print_dash(int num);
void verify(long double change);

int main()
{
    cls();
    long double change{};
    print_dash(37);
    cout << "Change Conversion Table (US dollar)::" << endl;
    cout << "1 dollar is 100¢" << endl;
    cout << "1 quarter is 25¢" << endl;
    cout << "1 dime is 10¢" << endl;
    cout << "1 nickel is 5¢" << endl;
    cout << "1 penny is 1¢" << endl;
    print_dash(37); 
    cout << "Enter your change in cents: ";
    cin >> change;
    cout << endl;
    verify(change);

    return 0;
}

void cls()
{
    system("clear");
}

void print_dash(int num)
{
    int cont;
    for (cont = 0; cont < num; ++cont)
    {
        cout << "-";
    }
    cout << endl;
}

void print_table(int array[5])
{
    cout << "Dollars: " << array[0] << endl;
    cout << "Quarters: " << array[1] << endl;
    cout << "Dimes: " << array[2] << endl;
    cout << "Nickels: " << array[3] << endl;
    cout << "Pennies: " << array[4] << endl;
}

void verify(long double change)
{
    int array[5]{};

    change = abs(change)/100;
    while (change >= 1)
    {
        --change;
        ++array[0];
    }
    while (change >= 0.25)
    {
        change -= 0.25;
        ++array[1];
    }
    while (change >= 0.10)
    {
        change -= 0.10;
        ++array[2];
    }
    while (change >= 0.5)
    {
        change -= 0.05;
        ++array[3];
    }
    while (change >= 0.00)
    {
        change -= 0.01;
        ++array[4];
    }
    print_table(array);
}