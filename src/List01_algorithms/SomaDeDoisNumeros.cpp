#include <iostream>
#include <vector>

using namespace std;

int main() {
    int tamanho;
    long target;

    cin >> tamanho;
    cin >> target;

    vector<int> nums(tamanho);

    for (int i = 0; i < tamanho; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < tamanho; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (nums[i] + nums[j] == target) {
                cout << i << " " << j << endl;
                return 0;
            }
        }

    }

}