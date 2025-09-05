#include <bits/stdc++.h>
using namespace std;

vector<tuple<int, int, int>> valid_triples = {{1, 2, 4}, {1, 2, 6}, {1, 3, 6}};
vector<int> freq(8, 0);
vector<vector<int>> result;
int n;

bool backtrack(int groups_needed, int numbers_used) {
    if (numbers_used == n) { // All numbers used
        return true;
    }
    if (groups_needed == 0) { // Not enough numbers used
        return false;
    }

    for (auto [a, b, c] : valid_triples) {
        if (freq[a] > 0 && freq[b] > 0 && freq[c] > 0) {
            // Use this triple
            freq[a]--; freq[b]--; freq[c]--;
            result.push_back({a, b, c});
            
            if (backtrack(groups_needed - 1, numbers_used + 3)) {
                return true;
            }
            
            // Backtrack
            freq[a]++; freq[b]++; freq[c]++;
            result.pop_back();
        }
    }
    return false;
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
    
    if (backtrack(n / 3, 0)) {
        for (auto &triple : result) {
            cout << triple[0] << " " << triple[1] << " " << triple[2] << endl;
        }
    } else {
        cout << -1 << endl;
    }
    
    return 0;
}