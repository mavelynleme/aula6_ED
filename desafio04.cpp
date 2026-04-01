#include <iostream>
using namespace std;

// Função para concatenar nome
string concatenar(string nome, string sobrenome) {
    return nome + " " + sobrenome;
}

// Função para somar vetor
int somaVetor(int v[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += v[i];
    }
    return soma;
}

// Função para subtrair vetor
int subtraiVetor(int v[], int tamanho) {
    int resultado = v[0];
    for (int i = 1; i < tamanho; i++) {
        resultado -= v[i];
    }
    return resultado;
}

// Função para multiplicar vetor
int multiplicaVetor(int v[], int tamanho) {
    int resultado = 1;
    for (int i = 0; i < tamanho; i++) {
        resultado *= v[i];
    }
    return resultado;
}

int main() {
    string nome, sobrenome;
    int vetor[5];

    // Parte 1: Nome
    cout << "Digite o nome: ";
    cin >> nome;

    cout << "Digite o sobrenome: ";
    cin >> sobrenome;

    cout << "Nome completo: " << concatenar(nome, sobrenome) << endl;

    // Parte 2: Vetor
    cout << "\nDigite 5 numeros inteiros:\n";
    for (int i = 0; i < 5; i++) {
        cin >> vetor[i];
    }

    cout << "Soma: " << somaVetor(vetor, 5) << endl;
    cout << "Subtracao: " << subtraiVetor(vetor, 5) << endl;
    cout << "Multiplicacao: " << multiplicaVetor(vetor, 5) << endl;

    return 0;
}
