#include <iostream>
#include "fila_dinamica.h"
#include <stdlib.h>
#include <cstddef>

using namespace std;

Dinamic_queue::Dinamic_queue() //contrução da fila
{
    primeiro= NULL;
    ultimo= NULL;
}
Dinamic_queue::~Dinamic_queue() //deletar fila
{   
    fila_dinamica* filaaux;
    while(ultimo!=NULL){  
        filaaux= primeiro;
        primeiro=primeiro->proximo;
        delete filaaux;
    }
    ultimo=NULL;
}
bool Dinamic_queue::is_full() //saber se ta cheia
{
    fila_dinamica* NovaFila;
    try
    {   
        NovaFila=new fila_dinamica;
        delete NovaFila;
        return false;
    }
    catch(bad_alloc exception)
    {
        return true;
    }
    
}
bool Dinamic_queue::is_empty()// saber se esta vazia
{
    return(primeiro==NULL);
}
void Dinamic_queue::push(type_item item)//adcionar um elemento
{
     if(is_full()){
         cout<<"Fila cheia, impossivel inserir novo item"<<endl;
     }else{
        fila_dinamica* NovaFila= new fila_dinamica;
        NovaFila->valor= item;
        NovaFila->proximo=NULL;
        if(primeiro==NULL){
            primeiro= NovaFila;
        }else{
            ultimo->proximo=NovaFila;
        }
        ultimo=NovaFila;
     }
}
type_item Dinamic_queue::pop()// remover um elemento
{
    if(is_empty()){
        cout<<"Sua fila esta vazia, nao e possivel remover nada\n";
        return 0;
    }else{
        fila_dinamica* Filaaux;
        Filaaux=primeiro;
        type_item item_drop;
        item_drop= Filaaux->valor;
        cout<<"O item "<< item_drop<< " foi removido.\n";
        primeiro=primeiro->proximo;
        if(primeiro==NULL){
            ultimo=NULL;
        }
        delete Filaaux;
        return 1;   
    }
}
void Dinamic_queue::imprimir()//printar a fila
{
    fila_dinamica* filaaux;
    filaaux=primeiro;
    cout<< "[ ";
    while (filaaux!=NULL)
    {
        cout<< filaaux->valor << " ";
        filaaux=filaaux->proximo;
    }
    cout<<"]"<<endl;
    
}
int Dinamic_queue::length(){
    return 1;
}
