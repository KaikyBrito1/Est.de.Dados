#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;

    cin >> texto;

    int tam = texto.length();

    for (int i = 0, j = tam - 1; i < j; i++, j--) {
        char aux = texto[i];
        texto[i] = texto[j];
        texto[j] = aux;
    }

    cout << texto;

    return 0;
}