#include <iostream>

int main() {
    long long a, b, n;
    std::cin >> a >> b >> n;

    long long x = a;
    for (int i = 0; i < n; ++i) {
        bool found = false;
        for (int d = 1; d <= 9; ++d) { // Prefer non-zero digits
            if ((x * 10 + d) % b == 0) {
                x = x * 10 + d;
                found = true;
                break;
            }
        }
        if (!found) {
            // Try d = 0 as a fallback
            if ((x * 10) % b == 0) {
                x = x * 10;
                found = true;
            }
        }
        if (!found) {
            std::cout << -1 << '\n';
            return 0;
        }
    }
    std::cout << x << '\n';
    return 0;
}