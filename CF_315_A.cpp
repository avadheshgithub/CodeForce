#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n), B(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i] >> B[i];
    }
    
    int unopenable = 0;
    for (int i = 0; i < n; i++) {
        bool can_open = false;
        for (int j = 0; j < n; j++) {
            if (j!=i && B[j] == A[i]) {
                can_open = true;
                break;
            }
        }
        if (!can_open) {
            unopenable++;
        }
    }
    
    cout << unopenable << endl;
    return 0;
}