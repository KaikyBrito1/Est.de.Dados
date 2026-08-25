#include <iostream>
#include <vector>
using namespace std;

int main() {
    int tam;
    int aux = 0;

    cin >> tam;

    vector<int> nums(tam);

    for (int i = 0; i < tam; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < tam; i++) {
        int qtd = 0;

        for (int j = 0; j < tam; j++) {
            if (nums[i] == nums[j]) {
                qtd++;
            }
        }

        if (qtd > tam / 2) {
            aux = nums[i];
            break;
        }
    }

    cout << aux;

    return 0;
}