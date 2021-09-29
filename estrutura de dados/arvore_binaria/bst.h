#include <iostream>
#include "aluno.h"

using namespace std;

struct No
{
    Aluno aluno;
    No * filhoEsqueda;
    No* filhoDireita;
};
class bst
{
private:    
    No* raiz;
public:
    bst(); // função construtora 
    ~bst(); // função descontrutora 
    void deletar_arvore(No* atual); // deletar toda a arvore
    No* obterRaiz(); // buscar a raiz da arvore
    bool is_empty(); // verificar se esta vazia
    bool is_full(); // verificar se esta cheia
    void push(Aluno aluno); // acrescentar aluno 
    void pop(Aluno aluno); // remover aluno
    void removerbusca(Aluno aluno, No*& atual); // função para buscar o aluno na parte da remoção
    void deletarno(No*& atual); // função para deletar o nó
    void obterSucessor(Aluno& alunoSucessor, No* temp); // função para obter o sucessor 
    void search(Aluno& aluno,bool& busca); // função de busca 
    void imprimirPreOrdem(No* atual); // print
    void imprimirPosOrdem(No* atual); // print
    void imprimirEmOrdem(No* atual); // print
};


