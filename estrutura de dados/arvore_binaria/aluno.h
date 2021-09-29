#include <iostream>

using namespace std;

class Aluno{
    private:
        int ra;
        string nome;
    public:
        Aluno(int r, string n); // função construtora 
        Aluno(); // função construtora 
        int retorna_Ra(); // retorna o registro do aluno
        string retorna_Nome(); // retorna o nome do aluno
};