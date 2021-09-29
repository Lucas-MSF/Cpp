#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){

    string cinema[9]={"b1","b2","b3","b4","b5","b6","b7","b8","b9"};
    string poltrona;
    char resp= 's';

    do{
        for(int i=0;i<9;i++)
            cout<< "["<< cinema[i]<< "]";

        cout<< "\ndigite qual poltrona vc deseja reservar: ";
        cin>> poltrona;

        if(poltrona=="b1"){
            cinema[0]="--";
        }else  if(poltrona=="b2"){
            cinema[1]="--";
        }else  if(poltrona=="b3"){
            cinema[2]="--";
        }else  if(poltrona=="b4"){
            cinema[3]="--";
        }else  if(poltrona=="b5"){
            cinema[4]="--";
        }else  if(poltrona=="b6"){
            cinema[5]="--";
        }else  if(poltrona=="b7"){
            cinema[6]="--";
        }else  if(poltrona=="b8"){
            cinema[7]="--";
        }else  if(poltrona=="b9"){
            cinema[8]="--";
        }else{
            cout<<"Opcao invalida!";
        }

        system("cls");
       
        for(int i=0;i<9;i++)
            cout<< "["<< cinema[i]<< "]";

        cout<< "\ndeseja fazer mais alguma reserva?[s/n]";
        cin>>resp;

    }while (resp=='s');
    
    return 0;

}