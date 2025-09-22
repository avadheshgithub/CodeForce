#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int k, x;
        cin >> k >> x;
        long long initial = x;
        for (int i = 0; i < k; i++) {
            initial *= 2;
        }
        cout << initial << endl;
    }
    return 0;
}