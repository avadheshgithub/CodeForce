#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    // Calculate toasts possible per resource
    int drink_toasts = (k * l) / (n * nl); // Total ml / (ml per toast for all friends)
    int lime_toasts = (c * d) / n;         // Total slices / (slices per toast)
    int salt_toasts = p / (n * np);        // Total salt / (salt per toast)
    
    // Find the minimum
    int toasts = min({drink_toasts, lime_toasts, salt_toasts});
    
    cout << toasts << endl;
    return 0;
}