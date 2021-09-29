#include <iostream>
#include "pilha.h"
#include <stdlib.h>

using namespace std;

void menu(int resposta, stack &pilha){
    type_item item;
    
    if(resposta==1)//Opção de inserir item
    { 
        cout<<"Insira o item: ";
        cin>>item;
        pilha.push(item);
        cout<<"Elemento adcionado com sucesso!!"<<endl;
        system("Pause");

    }else if (resposta==2)//opção de remover item
    {
        item= pilha.pop();
        cout<<"Elemento removido com sucesso."<<endl;
        system("Pause");

    }else if (resposta==3)//opção para printar a pilha
    {
        pilha.imprimir();
        system("Pause");

    }else if(resposta ==4)//opção para mostrar o tamanho da pilha
    {
        cout<<"A sua pilha contem "<< pilha.length()<< " elementos "<< endl;
        system("Pause");

    }else if(resposta==5)//opção para ver se a pilha esta vazia
    {
        if(pilha.is_empyt()){
            cout<<"A pilha esta vazia"<< endl;
            system("Pause");
        }else{
            cout<<"A pilha nao esta vazia"<<endl;
            system("Pause");
        } 

    }else if(resposta==6)//opção para ver se a pilha esta cheia
    {
        if(pilha.is_full()){
            cout<<"A pilha esta cheia"<< endl;
            system("Pause");
        }else{
            cout<<"A pilha nao esta cheia"<<endl;
            cout<<"A pilha ainda tem "<< (100-pilha.length())<<" espacos vagos"<< endl;
            system("Pause");
        }

    }else if(resposta==7)//opção para deletar a pilha por completo
    {
        pilha.~stack();
        cout<<"Pilha deletada com sucesso"<<endl;
        system("Pause");

    }else if(resposta>8)// alerta de opção invalida
    {
       cout<<"Opcao invalida!!"<<endl;
       system("Pause");
    }
}

int main(){
    stack pilha;
    int resposta;

    do{
        system("cls");
        cout<<"[1] adcionar elemento"<< endl;
        cout<<"[2] remover elemento"<< endl;
        cout<<"[3] imprimir pilha"<< endl;
        cout<<"[4] tamanho da pilha"<< endl;
        cout<<"[5] verificar se esta vazia"<< endl;
        cout<<"[6] verificar se esta cheia"<< endl;
        cout<<"[7] deletar pilha"<< endl;
        cout<<"[8] sair"<< endl;
        cout<< ">>";
        cin>> resposta;

        menu(resposta, pilha);

    }while(resposta!=8);

    return 0;
}