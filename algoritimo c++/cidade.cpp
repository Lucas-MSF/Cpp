#include <iostream>
#include "cidade.h"

using namespace std;

//função contrutor
cidade::cidade(int idade_cidade,int populacao_cidade,int CEP_cidade, string prefeito_cidade, string nome_estado, string nome_cidade)
{
    this->idade_cidade=idade_cidade;
    this->populacao_cidade=populacao_cidade;
    this->CEP_cidade=CEP_cidade;
    this->prefeito_cidade=prefeito_cidade;
    this->nome_estado=nome_estado;
    this->nome_cidade=nome_cidade;
}

//funções de get e set

void cidade::set_nome_estado(string nome_estado){
    this->nome_estado;
}
string cidade::get_nome_estado(){
    return nome_estado;
}

void cidade::set_nome_cidade(string nome_cidade){
    this->nome_cidade=nome_cidade;
}
string cidade::get_nome_cidade(){
    return nome_cidade;
}

void cidade::set_prefeito_cidade(string prefeito_cidade){
    this->prefeito_cidade=prefeito_cidade;
}
string cidade::get_prefeito_cidade(){
    return prefeito_cidade;
}

void cidade::set_CEP_cidade(int CEP_cidade){
    this->CEP_cidade=CEP_cidade;
}
int cidade::get_CEP_cidade(){
    return CEP_cidade;
}

void cidade::set_idade_cidade(int idade_cidade){
    this->idade_cidade=idade_cidade;
}
int cidade::get_idade_cidade(){
    return idade_cidade;
}

void cidade::set_populacao_cidade(int populacao_cidade){
    this->populacao_cidade=populacao_cidade;
}
int cidade::get_populacao_cidade(){
    return populacao_cidade;
}
