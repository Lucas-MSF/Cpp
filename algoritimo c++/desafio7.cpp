#include <iostream>

using namespace std;

int main(){

    int linha, coluna;

    cout<< "informe a quantida de linha da matriz: ";
    cin>> linha;
    cout<< "informe a quantidade de coluna da matriz: ";
    cin>> coluna;

    int matriz[linha][coluna], matrizsoma[linha][coluna];

    for (size_t i = 0; i < linha; i++){
        for (size_t j = 0; j < coluna; j++){
            cout<<"informe os valores para a matriz["<< i<<"]["<<j<<"]";
            cin>>matriz[i][j];
            matrizsoma[i][j]= matriz[i][j]*2;
        }
    }

    cout<<"A soma dos valores + o valor dobrado e:\n";

    for (size_t i = 0; i < linha; i++){
        for (size_t j = 0; j < coluna; j++){
            cout<< matriz[i][j]+matrizsoma[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}