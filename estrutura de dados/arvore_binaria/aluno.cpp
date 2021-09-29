#include <iostream>
#include "aluno.h"

using namespace std;

Aluno::Aluno()
{
    nome=" "; // definindo nome como espaço vazio
    ra= -1; // definindo registro como -1
}
Aluno::Aluno(int r, string n)
{
    ra=r; // criando registro baseado no q o usuario digita
    nome=n; //criando nome baseado no q o usuario digita
}
int Aluno::retorna_Ra()
{
    return ra; // retorna o registo 
}
string Aluno::retorna_Nome()
{
    return nome; // retorna o nome 
}