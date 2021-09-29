#include <iostream>
#include "fila.h"
#include <stdlib.h>

using namespace std;

fila::fila()//iniciando
{
    tamanho=0;
    estrutura = new type_item[max_fila];
}
fila::~fila()//deletando
{
    tamanho=0;
    delete[] estrutura;
}
void fila::push_fila(type_item item)//adcionando elemento
{
    if(is_full()){
        cout<<"A sua fila esta cheia, nao e possivel introduzir mais elementos\n";
    }else{
        estrutura[tamanho]=item;
        tamanho++;
        cout<<"Elemento "<<item<< " adcionado com sucesso"<<endl;
    }
}
void fila::pop_fila()//retirando elemento
{
    if(is_empty()){
        cout<<"Sua pilha esta vazia, nao e possivel remover nenhum elemento\n";
    }else{
        cout<<"Elemento "<< estrutura[0]<< " removido com sucesso\n";
        for(int i= 1;i<tamanho;i++){
            estrutura[i-1]= estrutura[i];
        }
        tamanho--;
    }
}
bool fila::is_empty()//verificando se ta vazia
{
    return(tamanho==0);
}
bool fila::is_full()//verificando se ta cheia
{
    return(tamanho==max_fila);
}
int fila::lenght()//tamanho da fila
{
    return tamanho;
}
void fila::imprimir()//print da fila
{
    cout<<"[";
    for(int i=0;i<tamanho;i++)
        cout<<" "<< estrutura[i];
    cout<<" ]"<<endl;
}