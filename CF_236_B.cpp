#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000; 
const int MOD = 1073741824; 

int d[MAXN + 1]; 

void precomputeDivisors() {
    for (int i = 1; i <= MAXN; i++) {
        for (int j = i; j <= MAXN; j += i) {
            d[j]++; 
        }
    }
}

int main() {
    
    precomputeDivisors();

    int a, b, c;
    cin >> a >> b >> c;

    long long sum = 0;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= b; j++) {
            for (int k = 1; k <= c; k++) {
                long long n = (long long)i * j * k;
                if (n > MAXN) continue; // Safety check
                sum = (sum + d[n]) % MOD;
            }
        }
    }

    cout << sum << endl;

    return 0;
}