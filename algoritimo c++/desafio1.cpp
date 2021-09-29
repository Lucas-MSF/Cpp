#include <iostream>

using namespace std;

float calculo (float a){
    float conta= ((a*a)-(3*a))+5;;
    return conta;
}

int main (){
    int numero;

    cout << "informe um numero para executarmos a funcao: ";
    cin >> numero;

    cout<<"o resultado da conta foi "<< calculo(numero);
}