#include "aluno.h"

Aluno::Aluno()
{
    Nomealuno= " ";
    ra=-1;
}
Aluno::Aluno(int r, string nome)
{
    Nomealuno= nome;
    ra= r;
}
int Aluno::obterRa()
{
    return ra;
}
string Aluno::obterNome()
{
    return Nomealuno;
}