#include <iostream>

using namespace std;

void troca(int &a, int &b){
    int aux;

    aux=a;
    a=b;
    b=aux;
}

int main(){

    int* numero= new int;
    int* numero2= new int;

    cout<<"insira o valor do primeiro numero: ";
    cin>> *numero;
    cout<< "insira o valor do segundo numero: ";
    cin>> *numero2;

    cout<<"o primeiro ponteiro vale: "<< *numero<<" local na memoria: "<< numero <<  endl;
    cout<<"o segundo ponteiro vale: "<< *numero2<< "local na memoria: "<< numero2 <<endl;

    troca(*numero, *numero2);

    cout<<"agora o primeiro ponteiro vale: "<< *numero<<" local na memoria: "<< numero <<  endl;
    cout<<"agora o segundo ponteiro vale: "<< *numero2<< " local na memoria: "<< numero2 <<endl;

    return 0;
}