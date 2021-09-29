#include <iostream>
#include "hash2.h"
#include <stdlib.h>

using namespace std;

void menu(int resposta, Hash& alunohash)
{
    string nome;
    int ra;
    bool buscar;
    

    if(resposta==1)
    {
        cout<<"Insira o nome do aluno: ";
        cin>>nome;
        cout<<"Insira o RA do aluno: ";
        cin>> ra;
        Aluno aluno(ra,nome);
        alunohash.push(aluno);

    }else if(resposta==2)
    {
        cout<<"Insira o RA do aluno q vc deseja remover: ";
        cin>>ra;
        Aluno aluno(ra," ");
        if(alunohash.pop(aluno)==0){
            cout<<"Aluno removido da tabela...\n";
        }else{
            cout<<"Aluno nao encontrado\n";
        }

    }else if(resposta==3)
    {
        cout<<"Insira o RA do aluno que deseja buscar: ";
        cin>>ra;
        Aluno aluno(ra, " ");
        if(alunohash.schare(aluno)==0){
            cout<<"Aluno encotrado.\n";
            cout<<"nome: "<< aluno.Retorna_nome()<<endl;
            cout<<"RA: "<<aluno.Retorna_Ra()<<endl;
        }else{
            cout<<"Aluno nao encontrado...\n";
        }

    }else if(resposta==4)
    {
        alunohash.imprimir();

    }else if(resposta==5)
    {
        cout<<"Tem "<<alunohash.length()<< " alunos cadastrados.\n";

    }else if(resposta==6)
    {
        alunohash.~Hash();

    }else if(resposta==7)
    {
        cout<<"encerrando programa..."<<endl;
    }else
    {
        cout<<"Opcao invalida!"<<endl;

    }
}

int main(){
    int max, tam_vetor;
    int resposta;


    cout<<"Insira o tamanho do vetor: ";
    cin>> tam_vetor;
    cout<<"Insira o numero maximo de itens: ";
    cin>> max;
    cout<<"O fator de carga e "<< (float)max / (float)tam_vetor<< endl;
    Hash alunohash(tam_vetor,max);
    system("pause");
    
    do{
        
        system("cls");

        cout<<"[1] adcionar elemento"<<endl;
        cout<<"[2] remover elemento"<<endl;
        cout<<"[3] buscar elemento"<<endl;
        cout<<"[4] imprimir hash"<<endl;
        cout<<"[5] tamanho do hash"<<endl;
        cout<<"[6] deletar hash"<<endl;
        cout<<"[7] sair"<<endl;
        cout<<">>";
        cin>>resposta;

        menu(resposta,alunohash);

        system("pause");

    }while(resposta!=7);
}