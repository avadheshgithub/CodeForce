#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

class Solution {
public:
    long long solve(int A, vector<int> &B, vector<int> &C);
};

long long Solution::solve(int A, vector<int> &B, vector<int> &C) {
    struct Job {
        int p_time;
        int s_time;
    };

    vector<Job> jobs(A);
    for (int i = 0; i < A; ++i) {
        jobs[i] = {B[i], C[i]};
    }

    sort(jobs.begin(), jobs.end(), [](const Job& a, const Job& b) {
        return min(a.p_time, b.s_time) < min(b.p_time, a.s_time);
    });

    long long pam_finish_time = 0;
    long long sam_finish_time = 0;

    for (const auto& job : jobs) {
        pam_finish_time += job.p_time;
        sam_finish_time = max(sam_finish_time, pam_finish_time) + job.s_time;
    }

    return sam_finish_time;
}

int main() {
    Solution solution;

    int A1 = 4;
    vector<int> B1 = {3, 2, 2, 4};
    vector<int> C1 = {1, 2, 3, 4};
    long long result1 = solution.solve(A1, B1, C1);
    cout << result1 << endl;

    int A2 = 5;
    vector<int> B2 = {2, 3, 4, 5, 4};
    vector<int> C2 = {5, 4, 3, 2, 1};
    long long result2 = solution.solve(A2, B2, C2);
    cout << result2 << endl;

    return 0;
}