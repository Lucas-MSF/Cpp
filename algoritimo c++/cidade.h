#include <iostream>

using namespace std;

class cidade{
    private:
    //variaveis usadas    
    int idade_cidade,populacao_cidade, CEP_cidade;
    string prefeito_cidade,nome_estado,nome_cidade;

    public:
    //função construtor
    cidade(int idade_cidade,int populacao_cidade,int CEP_cidade, string prefeito_cidade, string nome_estado, string nome_cidade);

    //funções get e set
    void set_nome_estado(string nome_estado);
    string get_nome_estado();
   
    void set_nome_cidade(string nome_cidade);
    string get_nome_cidade();
   
    void set_prefeito_cidade(string prefeito_cidade);
    string get_prefeito_cidade();
   
    void set_CEP_cidade(int CEP_cidade);
    int get_CEP_cidade();
   
    void set_idade_cidade(int idade);
    int get_idade_cidade();
   
    void set_populacao_cidade(int populacao_cidade);
    int get_populacao_cidade();

};