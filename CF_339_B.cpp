#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m; 
    
    vector<int> a(m); 
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }
    
    long long time = 0; 
    int curr = 1;  
    
    // Process each task
    for (int i = 0; i < m; i++) {
        if (a[i] >= curr) {
            time += a[i] - curr; 
        } else {
            time += (n - curr) + a[i]; 
        }
        curr = a[i]; 
    }
    
    cout << time << endl;
    return 0;
}