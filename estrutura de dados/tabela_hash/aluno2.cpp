#include <iostream>
#include "aluno2.h"


Aluno::Aluno()
{
    Ra= -1;
    nome= " ";
}
Aluno::Aluno(int r, string n)
{
    Ra= r;
    nome=n;
}
int Aluno::Retorna_Ra()
{
    return Ra;
}
string Aluno::Retorna_nome()
{
    return nome;
}