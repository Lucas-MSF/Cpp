#include <stdlib.h>
#include <iostream>
// biblioteca com função null #include <cstddef>

using namespace std;

int main(){

    int idade;
    float renda;

    cout<<"informe a sua idade: ";
    cin>>idade;
    cout<<"informe a sua renda: ";
    cin>>renda;

    if(idade>21 && renda<1200){
        cout<<"vc esta apto a participar do nosso programa!!";
    }else{
        cout<<"vc nao esta apto a participar do nosso programa :( ";
    }

    return 0;

}