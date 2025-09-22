#include <iostream>
using namespace std;

int main() {
    long long n, x;
    cin >> n >> x;

    long long count = 0;
    for (long long i = 1; i <= n && i * i <= x; i++) {
        if (x % i == 0) { // i is a divisor of x
            long long j = x / i; // Corresponding j such that i * j = x
            if (j <= n) { // Check if j is within bounds
                count++;
                if (i != j && j <= n) { // Count the pair (j, i) if i != j
                    count++;
                }
            }
        }
    }

    cout << count << endl;
    return 0;
}