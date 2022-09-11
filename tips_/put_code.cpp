#include <stdio.h>
#include <stdlib.h>
#include <new>
#include <iostream>

using namespace std;

int main()
{

    // Tamanho a ser criado
    int tamanho, i;

    // Lendo o tamanho do vetor
    cout << "Digite o tamanho:";
    cin >> tamanho;

    // Mostrando o tamanho lido
    cout << "Tamanho:" << tamanho;

    // Criando um ponteiro que recebe o novo vetor vazio
    int *vetor = new int[tamanho];  
 /* O "novo vetor vazio" criado não possui um nome e a única forma de chamá-lo é via ponteiro */


    // Passa valores para o vetor e os imprime na tela
    for (i = 0; i < tamanho; i++)
    {
        vetor[i] = i;
        cout << "\n"
             << vetor[i];
    }

    return 0;
}