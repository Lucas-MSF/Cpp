#include <iostream>
#include "hash.h"


using namespace std;

int Hash::funcaoHash(Aluno aluno)
{
    return (aluno.obterRa()%max_posicoes);
}
Hash::Hash(int tam_vetor, int max)
{
    quant_itens= 0;
    max_itens=max;
    max_posicoes=tam_vetor;
    estrutura= new Aluno[tam_vetor];
}
Hash::~Hash()
{
    quant_itens=0;
    delete[]estrutura;
    
}
bool Hash:: is_full()
{
    return (max_itens==quant_itens);
}
int Hash::lenght()
{
    return quant_itens;
}
void Hash::push(Aluno aluno)
{
    int local= funcaoHash(aluno);
    estrutura[local]=aluno;
    quant_itens++;
}
void Hash::pop(Aluno a)
{
    int local= funcaoHash(a);
    Aluno aux= estrutura[local];
    if(aux.obterRa() == a.obterRa()){
        estrutura[local]= Aluno(-1, " ");
        quant_itens--;
    }else{
        cout<<"Aluno nao cadastrado.\n";
    }

}
void Hash::schare(Aluno& a, bool& buscar)
{
    int local= funcaoHash(a);
    Aluno aux= estrutura[local];

    if(aux.obterRa()==a.obterRa()){
        buscar = true;
        a=aux;
        
    }else{
        buscar=false;
    }
    
}
void Hash::imprimir()
 {
     cout<<"Tabela hash"<<endl;
     for(int i=0; i<max_posicoes;i++){
         if(estrutura[i].obterRa()!=-1){
            cout<< "["<<i<<"]"<<":"<<endl<<"\tNome: "<< estrutura[i].obterNome()<<endl;
            cout<<"\tRA: "<< estrutura[i].obterRa()<<endl;
         }
     }
 }