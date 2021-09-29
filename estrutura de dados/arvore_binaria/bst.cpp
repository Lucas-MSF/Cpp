#include <iostream>
#include "bst.h"
#include <cstddef>

using namespace std;

bst::bst()
{
    raiz=NULL;
}
bst::~bst()
{
    deletar_arvore(raiz);
}
void bst::deletar_arvore(No* atual)
{
    if(atual!=NULL){
        deletar_arvore(atual->filhoEsqueda);
        deletar_arvore(atual->filhoDireita);
        delete atual;
    }
}
No* bst::obterRaiz()
{
    return raiz;
}
bool bst::is_empty()
{
    return (raiz== NULL);
}
bool bst::is_full()
{
    try{
        No* temp=new No;
        delete temp;
        return false;
    }catch(bad_alloc exception){
        return true;
    }
}
void bst::push(Aluno aluno)
{
    if (is_full()){
            cout << "A Arvore esta cheia!\n";
            cout << "Nao foi possivel inserir este elemento!\n";
    }else
    {
        No* NoNovo = new No;
        NoNovo->aluno = aluno;
        NoNovo->filhoDireita = NULL;
        NoNovo->filhoEsqueda = NULL;
        if (raiz == NULL){
            raiz = NoNovo;
        }else
        {
            No* temp = raiz;
            while (temp != NULL){
                if (aluno.retorna_Ra() < temp->aluno.retorna_Ra()){
                    if (temp->filhoEsqueda == NULL){
                        temp->filhoEsqueda = NoNovo;
                        break;
                    }else
                    {
                        temp = temp->filhoEsqueda;
                    }
                }else
                {
                    if (temp->filhoDireita == NULL){
                        temp->filhoDireita = NoNovo;
                        break;
                    }else
                    {
                        temp = temp->filhoDireita;
                    }
                }
            }
        }
    }
}
void bst::pop(Aluno aluno)
{
    removerbusca(aluno,raiz);
}
void bst::removerbusca(Aluno aluno, No*& atual)
{
    if(aluno.retorna_Ra()> atual->aluno.retorna_Ra()){
        removerbusca(aluno,atual->filhoDireita);
    }else if( aluno.retorna_Ra()< atual->aluno.retorna_Ra()){
        removerbusca(aluno,atual->filhoEsqueda);
    }else if(aluno.retorna_Ra()==atual->aluno.retorna_Ra()){
        deletarno(atual);
    }else{
        cout<<"Aluno nao cadastrado."<<endl;
    }
}
void bst::deletarno(No*& atual)
{
    No* temp= atual;

    if(atual->filhoDireita==NULL){
        atual= atual->filhoEsqueda;
        delete temp;
    }else if(atual->filhoEsqueda==NULL){
        atual= atual->filhoDireita;
        delete temp;
    }else{
        Aluno alunosucessor;
        obterSucessor(alunosucessor, atual);
        atual->aluno=alunosucessor;
        removerbusca(alunosucessor, atual->filhoDireita);
    }
}
void bst::obterSucessor(Aluno& alunoSucessor, No* temp)
{
    temp=temp->filhoDireita;
    while (temp->filhoEsqueda!=NULL)
    {
        temp=temp->filhoEsqueda;
    }
    alunoSucessor= temp->aluno;
    
}
void bst::search(Aluno& aluno,bool& busca)
{
    busca = false;
    No* noatual = raiz;
    while (noatual != NULL){
        if (aluno.retorna_Ra() < noatual->aluno.retorna_Ra()){
            noatual = noatual->filhoEsqueda;
        }else if (aluno.retorna_Ra() > noatual->aluno.retorna_Ra())
        {
                noatual = noatual->filhoDireita;
        }else
        {
            busca = true;
            aluno = noatual->aluno;
            break;
        }
    }
}
void bst::imprimirPreOrdem(No* atual)
{
    if(atual!=NULL){
        cout<<"Nome: "<< atual->aluno.retorna_Nome()<<endl;
        cout<<"RA: "<< atual->aluno.retorna_Ra()<<endl;

        imprimirPreOrdem(atual->filhoEsqueda);

        imprimirPreOrdem(atual->filhoDireita);
    }
}
void bst::imprimirPosOrdem(No* atual)
{
    if(atual!=NULL){
        imprimirPosOrdem(atual->filhoEsqueda);
        imprimirPosOrdem(atual->filhoDireita);

        cout<<"Nome: "<< atual->aluno.retorna_Nome()<<endl;
        cout<<"RA: "<< atual->aluno.retorna_Ra()<<endl;
    }
}
void bst::imprimirEmOrdem(No* atual)
{
    if(atual!= NULL){
        imprimirEmOrdem(atual->filhoEsqueda);

        cout<<"Nome: "<< atual->aluno.retorna_Nome()<<endl;
        cout<<"RA: "<< atual->aluno.retorna_Ra()<<endl;

        imprimirEmOrdem(atual->filhoDireita);
    }
}