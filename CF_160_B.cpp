#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    
    string fst = s.substr(0, n);      
    string scnd = s.substr(n, n); 


    sort(fst.begin(), fst.end());
    sort(scnd.begin(), scnd.end());

    bool less = true;
    bool greater = true;

    for (int i = 0; i < n; i++) {
        if (fst[i] >= scnd[i]) {
            less = false; 
        }
        if (fst[i] <= scnd[i]) {
            greater = false; 
        }
    }

    if (less || greater) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}