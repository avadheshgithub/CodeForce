#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    string res = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == t[i]) res += '0'; // Same bits -> '0'
        else res += '1';              // Different bits -> '1'
    }
    cout << res << endl;
    return 0;
}