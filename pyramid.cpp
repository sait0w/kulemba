#include <iostream>
#include <vector>
#include <stdio.h>
#include <string.h>
using namespace std;

void cls();
void space(int num); 
void pause();
void print_charray(vector <char> ch);

int main(){
  cls();
 string input;
 char *charray2;
 
 /* User input of string */
 cout << "Enter your word of choice: ";  
 cin >> input;
 charray2 = &input[0];
 int cont = 0;

 const int size = sizeof(charray2)/sizeof(charray2[0]);

 vector <char> charray (size);
 vector <char> left_side_ary(size-1);
 int rev_cont;

  for(cont=0;cont<size;++cont){
   space(size-cont);

   if(cont>0){
   /* Reverse push_back */
  left_side_ary.push_back(charray2[cont]);
   for(rev_cont=left_side_ary.size()-1;rev_cont>=0;rev_cont--){
    cout << left_side_ary.at(rev_cont);
    }
   }
   charray.push_back(charray2[cont]);
   print_charray(charray);
   cout << endl;
  }
 return 0;
}

void cls(){
 system("clear");
}

void space(int num){
 int cont;
  for(cont=0;cont<num;cont++){
   cout << " "; 
  }
}

void print_charray(vector <char> ch){
 int cont;
  for(cont=0;cont<ch.size();cont++){
   cout << ch.at(cont);    
  }
}