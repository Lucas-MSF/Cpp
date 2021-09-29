#include <iostream>

using namespace std;

int main(){
    char resp='s';

    do{
        int tamanho;
        cout<<"informe o tamanho do vetor: ";
        cin>> tamanho;
        
        int*vetor= new int[tamanho];

        for(int i=0; i<tamanho;i++){
            cout<<"informe o valor do vetor["<< i<<"]: ";
            cin>>vetor[i]; 
        }
        for(int i=0; i<tamanho;i++){
            cout<< vetor[i]<< " ";
        }
        cout<< "\ndeseja fazer outro vetor?[s/n] ";
        cin>>resp;

        if (resp=='s'){
            delete vetor;
        }

    }while (resp=='s');
    

    return 0;
}