#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
        }

       
        int idx = 0;
        if (vec[0] != vec[1] && vec[1] == vec[2]) {
            idx = 0; 
        } else if (vec[n-1] != vec[n-2] && vec[n-2] == vec[n-3]) {
            idx = n-1; 
        } else {
            for (int i = 1; i < n-1; i++) {
                if (vec[i] != vec[0] && vec[0] == vec[n-1]) {
                    idx = i; 
                    break;
                }
            }
        }

        cout << idx + 1 << endl; 
    }

    return 0;
}