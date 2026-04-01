#include <iostream>
using namespace std;

// Função com retorno
string concatenar(string nome, string sobrenome) {
    return nome + " " + sobrenome;
}

int main() {
    string nome, sobrenome, nomeCompleto;

    cout << "Digite o nome: ";
    cin >> nome;

    cout << "Digite o sobrenome: ";
    cin >> sobrenome;

    // Chamada da função
    nomeCompleto = concatenar(nome, sobrenome);

    cout << "Nome completo: " << nomeCompleto << endl;

    return 0;
}
