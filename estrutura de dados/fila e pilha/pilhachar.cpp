#include <iostream>
#include "pilhachar.h"

using namespace std;

stackChar::stackChar()// iniciar pilha
{
    tamanho=0;
    pilha= new type_item[max_item];
}
stackChar::~stackChar()// deletar pilha
{
    tamanho=0;
    delete[] pilha;
}
void stackChar::push(type_item item)//add item
{
    if(is_full()){
        cout<<"A pilha esta cheia!!"<<endl;
        cout<<"Nao e possivel adcionar um novo item"<<endl;
    }else{
        pilha[tamanho]=item;
        tamanho++;
        cout<<"item adcionado com sucesso!!"<<endl;
    }
}
type_item stackChar::pop()// remove item
{
    if(is_empty()){
        cout<<"A pilha esta vazia!!"<<endl;
        cout<<"Nao e possivel remover item!!";
        return 0;
    }else{
        tamanho--;
        return pilha[tamanho];

    }
}
bool stackChar::is_empty()// verificador vazio
{
    return(tamanho==0);
}
bool stackChar::is_full()// verificador cheio
{
    return(tamanho==100);
}
int stackChar::lenght()// tamanho
{
    return tamanho;
}
void stackChar::imprimir()//imprime a pilha
{
    cout<<"[";
    for (int i = 0; i < tamanho ; i++)
    {
        cout<< " "<<pilha[i];
    }
    cout<<" ]"<< endl;
    
}