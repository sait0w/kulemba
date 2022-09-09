#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::boolalpha;
using std::noboolalpha;

void cls();

void verify(int num1,int num2){
 bool result {false};
 result = (num1 == num2);
 cout << result << endl;
}

int main(){
 cls();
 cout << boolalpha;
 int num1 {}, num2 {};
 cout << "Insira os dois valores:";
 cin >> num1 >> num2;
 verify(num1, num2);
 cout << noboolalpha;
 verify(num1, num2);

 return 0;
}

void cls(){
 system("clear");
}
