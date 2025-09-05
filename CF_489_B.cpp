#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr1(n); 
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }

    int m;
    cin >> m;
    vector<int> arr2(m); 
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    int count = 0;
    int i = 0, j = 0; 
    while (i < n && j < m) {
        if (abs(arr1[i] - arr2[j]) <= 1) {
            count++; 
            i++;    
            j++;    
        } else if (arr1[i] < arr2[j]) {
            i++; 
        } else {
            j++; 
        }
    }

    cout << count << endl;
    return 0;
}