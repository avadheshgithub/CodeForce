#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    
    
    for (int i = 1; i < n; i++) {
        if (a[i] - a[i-1] > 1) {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    
    map<long long, int> freq;
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
    }
    
   
    int max_freq = 0;
    for (auto it = freq.begin(); it != freq.end(); ++it) {
        max_freq = max(max_freq, it->second);
    }
    
    if (max_freq > n / 2) {
        cout << "NO" << endl;
        return 0;
    }
    
    cout << "YES" << endl;
    return 0;
}