#include <bits/stdc++.h>
using namespace std;

int main() {
    long long y, k, n;
    cin >> y >> k >> n;

    bool found = false; 
    long long p = (y + k - 1) / k; 
    while (k * p <= n) {
        long long x = k * p - y;
        if (x > 0) { 
            cout << x << " ";
            found = true;
        }
        p++;
    }

    if (!found) {
        cout << "-1";
    }
    cout << endl;

    return 0;
}