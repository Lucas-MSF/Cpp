#include <iostream>
#include "fila2.h"
#include <cstddef>

using namespace std;

fila2::fila2()
{
    tamanho=0;
    primeiro= NULL;
    ultimo= NULL;
}
fila2::~fila2()
{
    No* Noaux;
    while (primeiro!=NULL)
    {
        Noaux=primeiro;
        primeiro= primeiro->proximo;
        delete Noaux;
    }
    ultimo=NULL;
    tamanho=0;
}
void fila2::push(type_item item)
{
    if(is_full()){
        cout<<"Nao e possivel inserir um novo elemento pois a fila esta cheia.\n";
    }else{
        No* NoNovo=new No;
        NoNovo ->valor= item;
        NoNovo ->proximo=NULL;
        if(primeiro==NULL){
            primeiro=NoNovo;
        }else{
            ultimo->proximo=NoNovo;
        }
        ultimo=NoNovo;
        tamanho++;
    }

}
type_item fila2::pop()
{
    if(is_empty()){
        cout<<"A fila esta vazia, nao e possivel remover ninguem.\n";
        return 0;
    }else{
        No* Noaux;
        Noaux= primeiro;
        type_item item;
        item= Noaux->valor;
        cout<<"O item "<< item<< " foi removido."<<endl;
        primeiro= primeiro->proximo;
        delete Noaux;
        tamanho--;
        return 1;
    }
}
bool fila2::is_empty()
{
    return (primeiro==NULL);
}
bool fila2::is_full()
{
    try
    {
        No* NoNovo= new No;
        delete NoNovo;
        return false;
    }
    catch(bad_alloc exception)
    {
        return true;
    }
    
}
void fila2::imprimir(){
    No* Noaux;
    Noaux=primeiro;
    cout<<"[ ";
    while (Noaux!=NULL)
    {
       cout<<Noaux->valor<<" ";
       Noaux= Noaux->proximo;
    }
    cout<<"]"<< endl;
    
}
int fila2::lenght()
{
    return tamanho;
}