#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Input the number

    // Print the multiplication table from 1 to 12
    for (int i = 1; i <= 12; i++) {
        cout << N << " * " << i << " = " << N * i << endl;
    }

    return 0;
}
