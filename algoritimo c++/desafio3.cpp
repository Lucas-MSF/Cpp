#include <iostream>

using namespace std;

int fatorial(int x){
    int fatorial=1;
    for(int i=1; i<=x;i++)
        fatorial*=i;
    return fatorial;
}

int main (){

    int num;

    cout<<"informe um numero para saber o seu fatorial: ";
    cin>>num;

    cout<<"O fatorial de "<< num<< " eh: "<<fatorial(num); 
}