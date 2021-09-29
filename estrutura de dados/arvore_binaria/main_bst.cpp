#include <iostream>
#include "bst.h"
#include <stdlib.h>

using namespace std;

void menu(int resposta, bst& arvore)
{
    string nome;
    int ra;
    bool buscar=false;
    

    if(resposta==1)
    {
        cout<<"Insira o nome do aluno: ";
        cin>>nome;
        cout<<"Insira o RA do aluno: ";
        cin>> ra;
        Aluno aluno(ra,nome);
        arvore.push(aluno);

    }else if(resposta==2)
    {
        if(arvore.is_empty()){
            cout<<"A pilha esta vazia, nao e possivel inserir elementos.\n";
        }else{
            cout<<"Insira o RA do aluno q vc deseja remover: ";
            cin>>ra;
            Aluno aluno(ra," ");
            arvore.pop(aluno);
        }
    }else if(resposta==3)
    {
        cout<<"Insira o RA do aluno que deseja buscar: ";
        cin>>ra;
        Aluno aluno(ra, " ");
        arvore.search(aluno,buscar);

        if(buscar)
        {
            cout<<"Aluno encontrado."<<endl;
            cout<<"Nome: "<<aluno.retorna_Nome()<<endl;
            cout<<"RA: "<<aluno.retorna_Ra()<<endl;
        }else
        {
            cout<<"aluno nao encontrado."<<endl;
        }

    }else if(resposta==4)
    {   
        int imprimir;
        cout<<"Insira a maneira q deseja imprimir a arvore: \n";
        cout<<"[1] Pre-ordem\n";
        cout<<"[2] Em ordem\n";
        cout<<"[3] Pos-ordem\n";
        cin>> imprimir;

        if(imprimir==1){
            arvore.imprimirPreOrdem(arvore.obterRaiz());
        }else if( imprimir==2){
            arvore.imprimirEmOrdem(arvore.obterRaiz());
        }else if (imprimir==3)
        {
            arvore.imprimirPosOrdem(arvore.obterRaiz());
        }else{
            cout<<"Opcao invalida!\n";
        }
        

    }else if(resposta==5)
    {
        arvore.~bst();

    }else if(resposta==6)
    {
        cout<<"encerrando programa..."<<endl;

    }else
    {
        cout<<"Opcao invalida!"<<endl;

    }
}
int main()
{

    bst arvore;
    int resposta;

    do{

        system("cls");

        cout<<"[1] adcionar elemento"<<endl;
        cout<<"[2] remover elemento"<<endl;
        cout<<"[3] buscar elemento"<<endl;
        cout<<"[4] imprimir arvore"<<endl;
        cout<<"[5] deletar arvore"<<endl;
        cout<<"[6] sair"<<endl;
        cout<<">>";
        cin>>resposta;

        menu(resposta,arvore);

        system("pause");

    }while(resposta!=6);

    return 0;
}