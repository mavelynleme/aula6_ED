#include <iostream>
using namespace std;

bool ehPar(int numero) {
    return numero % 2 == 0;
}

int main() {
    int numero = 7;

    if (ehPar(numero)) {
        cout << numero << " é um número par." << endl;
    } else {
        cout << numero << " não é um número par." << endl;
    }

    return 0;
} 
