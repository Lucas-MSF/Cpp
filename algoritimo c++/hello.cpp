#include <iostream>
#include <stdlib.h>
#include <vector>


using namespace std;



int main(){

    int contador= 1;
    float nota1, nota2, media;
    vector<string>armazenaaluno;
    vector<float>armazenamedia;
    string nome;
    bool booleano = true;
    char maisaluno;

    cout << " ------------------------\n ";
    cout << "       Media escolar \n";
    cout << " ------------------------\n";
    do{
          
        cout << "insira o nome do aluno: ";
        cin >> nome;
        cout << "insira sua primeira nota: ";
        cin >> nota1;
        cout << "insira sua segunda nota: ";
        cin >> nota2;

        media= (nota1+nota2)/2;

        armazenamedia.push_back(media);
        armazenaaluno.push_back(nome);
        

        cout << "Deseja adcionar mais um aluno?[S/N]\n";
        cin >> maisaluno;

        if (maisaluno=='n' || maisaluno=='N'){
            booleano= false;
            system("cls");
        }else{
            contador+=1;
            cout << "------------------------\n";
        }

    }while (booleano==true);

    cout << "-------------------------\n";
    
    for (size_t i = 0; i < contador; i++)
    {
        cout << "aluno: " << armazenaaluno[i] << "\nmedia: " << armazenamedia[i];
        cout << "\n-------------------------\n";
    }
    return 0;
}