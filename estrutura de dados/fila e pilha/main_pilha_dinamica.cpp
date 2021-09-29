#include <iostream>
#include "pilha_dinamica.h"
#include <stdlib.h>

using namespace std;

void menu(int opcao, Dinamic_stack &f)
{
    type_item item;
    switch (opcao)
    {
    case 1:
        cout<<"Informe o elemento para ser adcionado: ";
        cin>>item;
        f.push(item);
        break;
    case 2:
        f.pop();
        break;   
    case 3:
        f.imprimir();
        break;
    case 4: 
        cout<< "Sua fila contem "<< f.length() << " elementos.\n";
        break;
    case 5:
        if (f.is_full())
        {
            cout<<"A fila esta cheia"<<endl;
        }else{
            cout<<"A fila ainda tem "<<(100-f.length())<< " espacos vagos\n";
        }
        break;
    case 6:
        if (f.is_empyt())
        {
            cout<<"Sua fila esta vazia, favor inserir elementos."<<endl;
        }else{
            cout<<"Sua fila contem "<< f.length()<< " elementos."<<endl;
        }
        break;
    case 7:
        f.~Dinamic_stack();
        cout<<"Fila deletada com sucesso.\n";
        break;
    case 8:
        cout<<"Encerando programa..."<<endl;
        break;
    default:
        cout<<"Opcao invalida!!"<< endl;
        break;
    }
}

int main()
{

    Dinamic_stack f;
    int resposta;

    do{

        system("cls");

        cout<<"[1] adcionar elemento"<<endl;
        cout<<"[2] remover elemento"<<endl;
        cout<<"[3] imprimir fila"<<endl;
        cout<<"[4] tamanho da fila"<<endl;
        cout<<"[5] verificar se esta cheia"<<endl;
        cout<<"[6] verificar se esta vazia"<<endl;
        cout<<"[7] deletar fila"<<endl;
        cout<<"[8] sair"<<endl;
        cout<<">>";
        cin>>resposta;

        menu(resposta,f);

        system("pause");

    }while(resposta!=8);

    return 0;
}