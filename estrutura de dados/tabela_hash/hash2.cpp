#include <iostream>
#include "hash2.h"

using namespace std;

int Hash::funcaoHash(Aluno a)
{
    return (a.Retorna_Ra()%max_posicoes);
}
Hash::Hash(int max, int tam_vetor)
{
    max_itens= max;
    max_posicoes=tam_vetor;
    estrutura= new Aluno[tam_vetor];
    quant_itens=0;
}
Hash::~Hash()
{
    quant_itens=0;
    delete [] estrutura;
}
bool Hash::is_full()
{
    return (quant_itens==max_itens);
}
void Hash::push(Aluno a)
{
    if(is_full()){
        cout<<"A tabela esta cheia, nao e possivel inserir o elemento\n";
    }else{
        int local= funcaoHash(a);
        while(estrutura[local].Retorna_Ra()>0){
            local= (local+1)%max_posicoes;
        }
        estrutura[local]= a;
        quant_itens++;
    }
}
int Hash::pop(Aluno a)
{
    int local = funcaoHash(a);
    while (estrutura[local].Retorna_Ra()!=-1)
    {
        if(estrutura[local].Retorna_Ra() == a.Retorna_Ra()){
            estrutura[local]= Aluno(-2," ");
            quant_itens--;
            return 0;
        }else{
            local++;
        }
    }
   return 1;
}
int Hash::schare(Aluno& a)
{
    int local= funcaoHash(a);
    while (estrutura[local].Retorna_Ra()!=-1)
    { 
        if(estrutura[local].Retorna_Ra()==a.Retorna_Ra()){
            a=estrutura[local];
            return 0;
        }else{
            local= (local+1)%max_posicoes;
        }
    }
   return 1;
}
int Hash::length()
{
    return quant_itens;
}
void Hash::imprimir()
{
    cout<<"tabela hash\n";
    for(int i=0; i<max_posicoes;i++){
        if(estrutura[i].Retorna_Ra()>0 ){
            cout<<"["<<i<<"]"<<endl<<"\tNome: "<< estrutura[i].Retorna_nome()<<endl;
            cout<<"\tRA: "<< estrutura[i].Retorna_Ra()<<endl;
        }
    }
}