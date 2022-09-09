#include <iostream>
#include <vector>
using namespace std;

void cls();
void print_vctor(vector <int> v,int tam);
void print_matrix(vector <vector<int>> m, vector <int> vctor);

int main(){
 int tam, cont, var;
 int vvctor[5];  //Declaring the array

 cout << "Insira o tamanho:";
 cin >> tam;
 vector <int> vctor (tam, 0);   //Declaring the vector 
 vector <vector<int>> matrix;   //Declaring the matrix 


 return 0;
}

void cls(){
 system("clear");
}

void print_vctor(vector <int> v,int tam){
 int cont;

  for(cont=0;cont<tam;cont++){
   cout << v.at(cont) << " ";
  }
  cout << endl;
}

void print_matrix(vector <vector<int>> m, vector <int> vctor){
 int cont1, cont2;

  for(cont1=0;cont1<2;cont1++){
    for(cont2=0;cont2<vctor.size();cont2++){
     cout << m.at(cont1).at(cont2) << " ";
    }
 cout << endl;
  }
}