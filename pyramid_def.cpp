#include <iostream>
#include <string>
#include <vector>
using namespace std;
 
void cls();
void space(int num);

int main(){
 string input {};
 char *charray;
 cls();

 /* Entering the word */
 cout << "Enter your word of choice:";
 getline(cin, input); 
 
 /* Defining some variables */
 charray = &input[0];
 vector <char> rey {};
 /* Different size-lenghts (one is a variable and the other is a constant) */
 const int size1 = input.length();

  int cont {}, cont2 {};

 /* Initializing Repetition */
 for(cont=0;cont<size1;++cont){
 cont2 = 0;
  space(size1-cont);
  rey.push_back(charray[cont]);   //Adds one element at a time of charray[cont]
   for(cont2=0;cont2<rey.size();++cont2){
    cout << rey[cont2];
   }
   if(cont>0){

     for(cont2=rey.size()-2;cont2>=0;--cont2){
      cout << rey[cont2];
     }
   }
  cout << endl;
 }
 return 0;
 }

 /* Clear screen function */
void cls(){
 system("clear");
}

 /* Space function */
void space(int num){
 int cont {};
  for(cont=0;cont<num;++cont){
    cout << " ";
  }
}
