#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

void cls();
void print_dash(int num);
void verify(double change);

int main()
{
    cls();
    double change {};
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

void verify(double change)
{
    int array[5] {};
    change /= 100;
    auto num {change};
        while (num > 1.00)
    {
        --num;
        ++array[0];
    }
    while (num >= 0.25)
    {
        num -= 0.25;
        ++array[1];
    }
    while (num >= 0.10)
    {
        num -= 0.10;
        ++array[2];
    }
    while (num >= 0.5)
    {
        num -= 0.05;
        ++array[3];
    }
    while (num >= 0.00)
    {
        num -= 0.01;
        ++array[4];
    }
    print_table(array);
}