#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string t = "";
    bool first_y = true;
    for (char c : s) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y') {
            continue;
        }
        // Handle edge case
        if (c == 'y') {
            if (first_y) {
                t += '.';
                t += 'y';
                first_y = false;
            }
            continue; 
        }
        t += '.';
        t += c;
    }
    cout << t << endl;
    return 0;
}