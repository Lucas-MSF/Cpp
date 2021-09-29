#include "aluno.h"

class Hash{
    private:
        
        int funcaoHash(Aluno aluno);
        int max_itens;
        int max_posicoes;
        int quant_itens;
        Aluno* estrutura;

    public:
        Hash(int tam_vetor, int max);
        ~Hash();
        bool is_full();
        int lenght();
        void push(Aluno aluno);
        void pop(Aluno aluno);
        void schare(Aluno& aluno, bool& buscar);
        void imprimir();
        
    };