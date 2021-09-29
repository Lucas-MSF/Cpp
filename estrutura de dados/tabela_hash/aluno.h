#include <iostream>

using namespace std;

class Aluno{

    private:
        int ra;
        string Nomealuno;
    public:
        Aluno();
        Aluno(int r, string nome);
        int obterRa();
        string obterNome();
};