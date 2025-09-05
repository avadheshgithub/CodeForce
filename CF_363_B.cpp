#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long sum = 0; 
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    
    long long min_sum = sum;
    int min_idx = 0; 

    // Slide the window
    for (int i = 1; i <= n - k; i++) {
        sum = sum - arr[i - 1] + arr[i + k - 1];
        if (sum < min_sum) {
            min_sum = sum;
            min_idx = i;
        }
    }

    cout << min_idx + 1 << endl;

    return 0;
}