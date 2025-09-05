#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);

    int C_s1 = 0, C_s2 = 0, C_s3 = 0;

    // Count vowels in s1
    for (char c : s1) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            C_s1++;
        }
    }

    // Count vowels in s2
    for (char c : s2) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            C_s2++;
        }
    }

    // Count vowels in s3
    for (char c : s3) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            C_s3++;
        }
    }

    if (C_s1 == 5 && C_s2 == 7 && C_s3 == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}