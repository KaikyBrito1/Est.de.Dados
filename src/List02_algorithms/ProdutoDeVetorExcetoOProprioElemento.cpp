#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> resposta(n,1);

    // Passo 1: Calcula o produto acumulado da esquerda para a direita (prefixo)
    int acumuladoEsquerda = 1;
    for (int i = 0; i < n; i++) {
        resposta[i] = acumuladoEsquerda;
        acumuladoEsquerda *= nums[i];
    }

    // Passo 2: Multiplica pelo acumulado da direita para a esquerda (sufixo)
    int acumuladoDireita = 1;
    for (int i = n - 1; i >= 0; i--) {
        resposta[i] *= acumuladoDireita;
        acumuladoDireita *= nums[i];
    }

    // Imprime o resultado final
    for (int i = 0; i < n; i++) {
        cout << resposta[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}