#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    /*Any Num is divisible by 90 then
        1. divisible by 10 so --> 0 at needed
        2. divisible by 9 so ---> sum of digits divisible by 9
    */

    int count_5 = 0, count_0 = 0;
    
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 5) count_5++;
        else count_0++;
    }
    
    // atleast one 0
    if (count_0 == 0) {
        cout << -1 << endl;
        return 0;
    }
    
    // largest multiple of 9 for 5s
    int k = (count_5 / 9) * 9; 
    
    if (k > 0) {
        for (int i = 0; i < k; i++) cout << 5;
        for (int i = 0; i < count_0; i++) cout << 0;
        cout << endl;
    } 
    else {
        cout << 0 << endl;
    }
    
    return 0;
}