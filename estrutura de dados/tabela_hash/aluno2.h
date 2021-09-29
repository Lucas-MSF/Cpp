#include <iostream>

using namespace std;

class Aluno{

    private:
       
        int Ra;
        string nome;
       
    public:

        Aluno();
        Aluno(int ra, string nome);
        int Retorna_Ra();
        string Retorna_nome();
        
};
