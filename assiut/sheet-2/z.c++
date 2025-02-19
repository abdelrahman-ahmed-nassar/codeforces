#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, s;
    cin >> k >> s;

    int count = 0;

    for (int x = 0; x <= k; x++) {
        for (int y = 0; y <= k; y++) {
            int z = s - (x + y);  // Calculate z to meet the sum condition
            if (z >= 0 && z <= k) {
                count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}


