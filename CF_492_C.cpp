#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, r, avg;
    cin >> n >> r >> avg;

   
    long long required_grade = n * avg;
    long long curr_grade = 0;


    vector<vector<int>> arr;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        curr_grade += a; 
        arr.push_back({a, b});
    }

    if (curr_grade >= required_grade) {
        cout << 0 << endl;
        return 0;
    }


    sort(arr.begin(), arr.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[1] < b[1];
    });

    
    long long need_grade = required_grade - curr_grade;
    long long total_cost = 0;
    int i = 0;

    while (i < arr.size() && need_grade > 0) {
        if (arr[i][0] < r) { 
            
            long long can_add = r - arr[i][0];
            long long add = min(can_add, need_grade);
            total_cost += add * arr[i][1];
            need_grade -= add;
        }
        i++;
    }

    cout << total_cost << endl;
    return 0;
}