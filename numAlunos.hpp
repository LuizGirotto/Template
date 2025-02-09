#ifndef _NUMALUNOS
#define _NUMALUNOS

#include "Disciplina.hpp"
#include <iostream>
using namespace std;

class numAlunos : public Disciplina {
protected:
    int nmrAlunos;
public:
    numAlunos(long codigo, string nome, int numAlunos) 
        : Disciplina(codigo, nome), nmrAlunos(numAlunos) {}

    friend ostream& operator<<(ostream& os, const numAlunos& d) {
        os << "Codigo: " << d.Codigo_ << ", Nome: " << d.Nome_ << ", Alunos: " << d.nmrAlunos;
        return os;
    }
};

#endif
