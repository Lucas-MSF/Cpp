#include <iostream>
#include "pilha.h"

using namespace std;

stack::stack()  //contrução da pilha
{    
    tamanho=0;
    estrutura= new type_item[max_itens];
} 

stack::~stack() //deletar pilha
{
    delete[] estrutura;
    tamanho=0;
}
bool stack::is_full() //saber se ta cheia
{
    return (tamanho==100);
}
bool stack::is_empyt()// saber se esta vazia
{
    return (tamanho==0);
}
void stack::push(type_item item)//adcionar um elemento
{
    if (is_full())
    {
        cout<<"A pilha esta cheia\n"<<endl;
        cout<<"Nao e possivel inserir um novo elemento."<<endl;
    }else{
        estrutura[tamanho]=item;
        tamanho++;
    }
}
type_item stack::pop()// remover um elemento
{
    if(is_empyt())
    {
        cout<<"A pilha esta vazia!!\n";
        cout<<"Nao e possivel efetuar a remocao\n";
        return 0;
    }else{
        tamanho--;
        return estrutura[tamanho];
    }
}
void stack::imprimir()//printar a pilha
{
    cout << "[";
    for(int i=0; i<tamanho;i++){
        cout << " " << estrutura[i] << " ";
    }
    cout << " ]\n";
}
int stack::length()//tamanho da pilha
{
    return tamanho;
}