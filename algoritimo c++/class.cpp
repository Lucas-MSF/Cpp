#include <iostream>
#include<stdlib.h>

using namespace std;

class carro{

    private: 
        int ano;
        string marca,modelo;
        float valor, km;
    public:
    // ano
    void set_ano(int ano);
    int get_ano();
    //modelo 
    void set_modelo(string modelo);
    string get_modelo();
    // marca
    void set_marca(string marca);
    string get_marca();
    //valor
    void set_valor(float valor);
    float get_valor();
    //km
    void set_km(float km);
    float get_km();
};

int main (){

    carro sedan;
    int ano;
    string marca,modelo;
    float km, valor;

    //Armazenando valores
    cout<< "Informe a marca do seu sedan: ";
    cin>> marca;
    sedan.set_marca(marca);

    cout<<"Informe o modelo do seu sedan: ";
    cin>>modelo;
    sedan.set_modelo(modelo);

    cout<< "Informe o ano do seu sedan: ";
    cin>> ano;
    sedan.set_ano(ano);

    cout<< "Informe quantos Km rodados o seu sedan tem: ";
    cin>>km;
    sedan.set_km(km);

    cout<<"Informe quanto o seu sedan esta valendo no mercado: ";
    cin>> valor;
    sedan.set_valor(valor);

    //printando informações

    system("cls");

    cout<<"---------------------------------\n";

    cout<<"Marca: "<< sedan.get_marca()<<endl;
    cout<<"Modelo: "<< sedan.get_modelo()<<endl;
    cout<<"Ano: "<< sedan.get_ano()<<endl;
    cout<<"Valor: "<< sedan.get_valor()<<endl;
    cout<<"Km rodado: "<< sedan.get_km()<<endl;

    cout<<"---------------------------------\n";

    return 0;
}

// ano
void carro::set_ano(int ano){
    this->ano=ano;
}
int carro::get_ano(){
    return ano;
}
//modelo 
void carro::set_modelo(string modelo){
    this->modelo=modelo;
}
string carro::get_modelo(){
    return modelo;
}
// marca
void carro::set_marca(string marca){
    this->marca=marca;
}
string carro::get_marca(){
    return marca;
}
//valor
void carro::set_valor(float valor){
    this->valor=valor;
}
float carro::get_valor(){
    return valor;
}
//km
void carro::set_km(float km){
    this->km=km;
}
float carro::get_km(){
    return km;
}