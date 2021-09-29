#include <iostream>

using namespace std;

int main(){

    float gastos[5], soma=0,media=0;

    for(int i=0;i<5;i++){    
        cout<< "informe seu gasto alimentar familia " << i+1<<":" ;
        cin>> gastos[i];
        soma=soma+gastos[i];
    }
    media=soma/5;

    for(int i=0; i<5; i++){
        if(gastos[i]>media){
            cout<< "familia "<< i+1<<": gastos acima da media!"<< endl;
        }else if(gastos[i]==media){
            cout<< "familia "<< i+1<<": gastos na media!"<< endl;
        }else{
            cout<< "familia "<< i+1<<": gastos abaixo da media!"<< endl;
        }
    }


    return 0;
}