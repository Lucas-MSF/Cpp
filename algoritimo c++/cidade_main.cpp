#include <iostream>
#include "cidade.h"

using namespace std;


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
