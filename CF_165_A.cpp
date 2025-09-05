#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    int supercentral = 0;
    for (int i = 0; i < n; i++) {
        bool has_right = false, has_left = false, has_up = false, has_down = false;
        for (int j = 0; j < n; j++) {
            if (i == j) continue; // Skip same point
            if (x[j] > x[i] && y[j] == y[i]) has_right = true; // Right
            if (x[j] < x[i] && y[j] == y[i]) has_left = true;  // Left
            if (x[j] == x[i] && y[j] > y[i]) has_up = true;    // Up
            if (x[j] == x[i] && y[j] < y[i]) has_down = true;  // Down
        }
        if (has_right && has_left && has_up && has_down) {
            supercentral++;
        }
    }

    cout << supercentral << endl;
    return 0;
}