#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<vector<int>> arr(3, vector<int>(3));
    vector<vector<int>> vec(3, vector<int>(3, 1)); 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }

    // Directions for side-adjacent neighbors: up, down, left, right
    int di[] = {-1, 1, 0, 0};
    int dj[] = {0, 0, -1, 1};

    // Compute toggles for each light
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int toggle = arr[i][j]; 
            // Add presses from side-adjacent neighbors
            for (int k = 0; k < 4; k++) {
                int ni = i + di[k];
                int nj = j + dj[k];
               
                if (ni >= 0 && ni < 3 && nj >= 0 && nj < 3) {
                    toggle += arr[ni][nj];
                }
            }

            vec[i][j] = (toggle % 2 == 0) ? 1 : 0;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << vec[i][j];
        }
        cout << endl;
    }

    return 0;
}