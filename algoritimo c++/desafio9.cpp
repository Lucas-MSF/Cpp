#include <iostream>
#include <cstddef>

using namespace std;

int main(){

    int* idade= new int;
    int* idade2= new int;
    float* media= new float;

    cout<<"informe sua idade: ";
    cin>> *idade;
    cout<<"informe outra idade: ";
    cin>> *idade2;

    *media= ( (float) *idade + (float) *idade2 )/2;

    cout<< "media: "<< *media;
}