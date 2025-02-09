#include "numAlunos.hpp"
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
T calcular(T a, T b, char operacao) {
    switch (operacao) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return (b != 0) ? a / b : throw invalid_argument("divisao por 0");
        default: throw invalid_argument("op invalida");
    }
}

int main() {

    vector<numAlunos> Disciplina;
    Disciplina.emplace_back(101, "matematica", 30);
    Disciplina.emplace_back(202, "fisica", 25);
    Disciplina.emplace_back(303, "quimica", 20);

    for (const auto& disc : Disciplina) {
        cout << disc << endl;
    }

    cout << "soma: " << calcular(10, 5, '+') << endl;
    cout << "subtracao: " << calcular(10, 5, '-') << endl;
    cout << "multiplicacao: " << calcular(10, 5, '*') << endl;
    cout << "divisao: " << calcular(10, 5, '/') << endl;

    return 0;
}
