#include <iostream>
#include<stdlib.h>

using namespace std;

//classe
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

//função para mostar as informações na tela 
void mostrar( cidade nome){

    system("cls");

    cout<<"-----------------------------------------\n";

    cout<<"cidade: "<< nome.get_nome_cidade()<<endl;
    cout<<"estado: "<<nome.get_nome_estado()<<endl;
    cout<<"prefeito: "<<nome.get_prefeito_cidade()<<endl;
    cout<<"CEP: "<<nome.get_CEP_cidade ()<<endl;
    cout<<"idade: "<<nome.get_idade_cidade()<<endl;
    cout<<"populacao: "<<nome.get_populacao_cidade()<<endl;

    cout<<"-----------------------------------------\n";
    system("pause");
}

int main(){
    //validação de loop
    int resposta=0;

    //declaração de objetos
    cidade guanambi(102,85000,46430000,"Nilo Coelho","Bahia","Guanambi");
    cidade mutans(95,50000,45462000,"Reginaldo","Bahia","Mutans");
    
    //loop menu
    do{
        system("cls");

        cout<<"Qual cidade vc deseja ver: \n";
        cout<<"[1] Guanambi"<<endl;
        cout<<"[2] Mutans"<<endl;
        cout<<"[3] sair"<<endl;
        cout<<"> ";
        cin>>resposta;

        //condições para seleção de opções
        if(resposta==1){
            mostrar(guanambi);
        }else if (resposta==2){
            mostrar(mutans);
        }else if(resposta!= 1 && resposta!= 2 && resposta!=3){
            cout<<"Opcao Invalida!!\n";
            system("pause");
        }    

    }while(resposta!=3);

    return 0;
}

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
