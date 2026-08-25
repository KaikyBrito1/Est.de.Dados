#include <iostream>
using namespace std;

int main() {
    int X;
    int total = 0;

    cin >> X;

    for (int i = 1; i <= X; i++) {
        total += (i + 2);
    }

    cout << total << endl;

    return 0;
}