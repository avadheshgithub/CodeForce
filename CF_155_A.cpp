#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int count = 0;
    int maxi = arr[0];
    int mini = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxi) {
            count++;
            maxi = arr[i]; 
        } 
        else if (arr[i] < mini) {
            count++;
            mini = arr[i]; 
        } 
        else {
            maxi = max(maxi, arr[i]);
            mini = min(mini, arr[i]);
        }
    }

    cout << count << endl;
    return 0;
}