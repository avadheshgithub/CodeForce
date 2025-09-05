#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 != 0) {
        cout << -1 << endl; 
    } else {
        vector<int> a(n + 1); 
        for (int i = 1; i <= n; i += 2) {
            a[i] = i + 1; // Set a[i] = i+1
            a[i + 1] = i; // Set a[i+1] = i
        }
        for (int i = 1; i <= n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}