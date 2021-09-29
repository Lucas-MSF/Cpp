#include <iostream>
#include "pilhachar.h"
#include <stdlib.h>

using namespace std;

void menu(int opcao, stackChar &PilhaChar){
    type_item item;
    switch (opcao)
    {
    case 1:
        if(PilhaChar.is_full()){
            PilhaChar.push(item);
        }else{
            cout<<"Insira o item: ";
            cin>> item;
            PilhaChar.push(item);
        }
        break;

    case 2:
        if(PilhaChar.is_empty()){
            PilhaChar.pop();
        }else{
            cout<<"item "<< PilhaChar.pop() <<" removido com sucesso!"<<endl;
        } 
        break;
    
    case 3:
        PilhaChar.imprimir();
        break;
    
    case 4:
        cout<< "Sua pilha contem "<< PilhaChar.lenght()<< " itens."<< endl;
        break;
    case 5:
        if(PilhaChar.is_empty()){
            cout<<"Sua pilha esta vazia."<<endl;
        }else{
            cout<<"Sua pilha contem itens."<<endl;
        }
        break;
    case 6:
        if(PilhaChar.is_full()){
            cout<<"Sua pilha esta cheia."<<endl;
        }else{
            cout<<"Sua pilha contem "<< (100-PilhaChar.lenght())<<" espacos vagos." <<endl;
        }
        break;
    case 7:
        PilhaChar.~stackChar();
        cout<<"Pilha delatada com sucesso."<<endl;
        break;
    
    default:
        if(opcao>8){
            cout<<"Opcao invalida!"<<endl;
        }else{
            cout<<"Encerrando programa..."<< endl;
        }
        break;
    }

}

int main(){
    stackChar PilhaChar;
    int resposta;

    do{

        system("cls");

        cout<<"[1] Inserir elemento"<< endl;
        cout<<"[2] Remover elemento"<< endl;
        cout<<"[3] Imprimir pilha"<< endl;
        cout<<"[4] Tamanho da pilha"<< endl;
        cout<<"[5] Verificar se esta vazia"<< endl;
        cout<<"[6] Verificar se esta cheia"<< endl;
        cout<<"[7] Deletar pilha"<< endl;
        cout<<"[8] Sair"<< endl;
        cout<<">>";
        cin>>resposta;
        
        menu(resposta,PilhaChar);
        system("pause");

    }while(resposta!=8);

    return 0;
}