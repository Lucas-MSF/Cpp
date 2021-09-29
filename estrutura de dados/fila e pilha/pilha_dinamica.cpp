#include <iostream>
#include "pilha_dinamica.h"
#include <cstddef>


using namespace std;

Dinamic_stack::Dinamic_stack() //contrução da pilha
{
    NoTopo= NULL;
    tamanho=0;
}
Dinamic_stack::~Dinamic_stack() //deletar pilha
{
    pilha_dinamica* Notemp;
    tamanho=0;
    while(NoTopo!=NULL){
        Notemp= NoTopo;
        NoTopo= NoTopo->proximo;
        delete Notemp;
    }
}
bool Dinamic_stack::is_full() //saber se ta cheia
{
    pilha_dinamica* NoNovo;
    try{
        NoNovo= new pilha_dinamica;
        delete NoNovo;
        return false;
    }catch(bad_alloc exception){
        return true;
    }
}
bool Dinamic_stack::is_empyt()// saber se esta vazia
{
    return(NoTopo==NULL);
}
void Dinamic_stack::push(type_item item)//adcionar um elemento
{
    if(is_full()){
        cout<<"A sua pilha esta cheia, nao e possivel inserir um novo item\n";
    }else{
        pilha_dinamica* NoNovo=new pilha_dinamica;
        NoNovo->valor=item;
        NoNovo->proximo=NoTopo;
        NoTopo=NoNovo;
        tamanho++;
    }
}
type_item Dinamic_stack::pop()// remover um elemento
{
    if(is_empyt()){
        cout<<"A sua pilha esta vazia, nao e possivel deletar nada!\n";
        return 0;
    }else{
        pilha_dinamica* Notemp;
        Notemp=NoTopo;
        type_item item_drop;
        item_drop= Notemp->valor;
        NoTopo= NoTopo->proximo;
        delete Notemp;
        tamanho--;
        cout<<"O elemento "<< item_drop<< " foi removido."<<endl;
        return 1;
    }
}
void Dinamic_stack::imprimir()//printar a pilha
{
    pilha_dinamica* Noaux;
    Noaux=NoTopo;
    cout<<"[ ";
    while (Noaux!=NULL)
    {
        cout<< Noaux->valor <<" ";
        Noaux=Noaux->proximo;
        
    }
    cout<<"]"<<endl;
    
}
int Dinamic_stack::length()//tamanho da pilha
{
    return tamanho;
}