#include <bits/stdc++.h>
using namespace std;

int main() {
 
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> freq(5001, 0);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    
    // Compute places for each rating
    vector<int> place(5001, 0);
    int higher = 0;
    for (int r = 5000; r >= 1; r--) {
        place[r] = 1 + higher; 
        higher += freq[r];     
    }
 
    // print output
    for (int i = 0; i < n; i++) {
        cout << place[a[i]] << " ";
    }
    cout << endl;
    
    return 0;
}