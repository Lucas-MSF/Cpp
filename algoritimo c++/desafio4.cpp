#include <iostream>
#include <stdlib.h>

using namespace std;

int potencia (int x, int y){
    int resultado=1;
    for(int i= 0;i<y;i++)
        resultado=resultado*x;
    return resultado;
}

int main (){
    int num,expoente;
    char resp;
    bool loop=true;
    
    do{
        cout<<"informe um numero: ";
        cin>>num;
        cout<<"informe o expoente: ";
        cin>>expoente;

        cout<<"O resultado dessa potenciacao eh: "<< potencia(num,expoente)<< endl;

        cout<<"deseja fazer outra conta?[s/n] ";
        cin>>resp;

        if(resp=='s'){
            loop=true;
            system("cls");
        }else{
            loop=false;
        }
    }while(loop==true);

}