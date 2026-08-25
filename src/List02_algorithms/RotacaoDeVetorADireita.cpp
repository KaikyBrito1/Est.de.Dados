#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Vetor auxiliar para guardar o resultado
    vector<int> resultado(n);

    // Subistituir elemento no seu novo índice rotacionado
    for (int i = 0; i < n; i++) {
        int novoIndice = (i + k) % n;
        resultado[novoIndice] = nums[i];
    }

    // Imprimimos o vetor rotacionado
    for (int i = 0; i < n; i++) {
        cout << resultado[i];
        if (i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}