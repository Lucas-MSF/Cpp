#include <iostream>
#include "aluno2.h"

using namespace std;

class Hash{

    private:
        int funcaoHash(Aluno a);
        int max_posicoes;
        int max_itens;
        int quant_itens;
        Aluno* estrutura;

    public:
        Hash(int max, int tam_vetor);
        ~Hash();
        bool is_full();
        void push(Aluno a);
        int pop(Aluno a);
        int schare(Aluno& a);
        int length();
        void imprimir();
};
