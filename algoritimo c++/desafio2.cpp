#include <iostream>

using namespace std;

int main (){

    float nota1,nota2,nota3,mediaturma,mediaaluno;

    cout<< "informe a media da sua turma: ";
    cin >> mediaturma;

    cout << "informe a sua noa na prova 1: ";
    cin >> nota1;
    cout << "informe a sua noa na prova 2: ";
    cin >> nota2;
    cout << "informe a sua noa na prova 3: ";
    cin >> nota3;

    mediaaluno= (nota1+nota2+nota3)/3;

    if(mediaaluno>mediaturma){
        cout<<"voce teve a media maior q a media da turma. sua media foi de "<< mediaaluno;
    }else if(mediaaluno==mediaturma){
        cout<<"voce teve a media igual a media da turma. sua media foi de "<< mediaaluno;
    }else{
        cout<<"voce teve a media menor q a media da turma. sua media foi de "<< mediaaluno;
    }
}