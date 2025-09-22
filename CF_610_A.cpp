#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    if (n % 2 != 0) {           // Odd --> Zero
        cout << 0 << endl;
        return 0;
    }

    long long ans = (n - 2) / 4; // Even --> floor((n-2)/4)
    cout << ans << endl;
    
    return 0;
}