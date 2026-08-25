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

        int pos = 0;

        for (int i = 0; i < tam; i++) {
            if (nums[i] != 0) {
                nums[pos] = nums[i];
                pos++;
            }
        }

        while (pos < tam) {
            nums[pos] = 0;
            pos++;
        }

        for (int i = 0; i < tam; i++) {
            cout << nums[i] << " ";
        }
        cout << endl;

    return 0;
}