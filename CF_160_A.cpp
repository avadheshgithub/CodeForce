#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int coins[100]; 
    
    long long total_sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
        total_sum += coins[i];
    }
    
    // Sort in descending order
    sort(coins, coins + n, greater<int>());
    
    long long my_sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        my_sum += coins[i];
        count++;
        if (my_sum > total_sum / 2) {
            break;
        }
    }
    
    cout << count << endl;
    return 0;
}