#include <iostream>
#include <vector>
using namespace std;

int main() {
    int tam;

    cin >> tam;

    vector<int> nums(tam);

    for (int i = 0; i < tam; i++) {
        cin >> nums[i];
    }

    for (int i = 0; i < tam; i++) {
        for (int j = i + 1; j < tam; j++) {
            if (nums[i] == nums[j]) {
                for (int k = j; k < tam - 1; k++) {
                    nums[k] = nums[k + 1];
                }
                j--;
                tam--;
            }
        }
    }

    cout << "Vetor final:" << endl;
    cout << tam << endl;

    for (int i = 0; i < tam; i++) {
        cout << nums[i] << " ";
    }

    return 0;
}