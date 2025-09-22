#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k; 

    int count = 0; 

    while (n--) {
        long long num;
        cin >> num; 

        string s = to_string(num);
        vector<int> fre(10, 0); 
        for (char c : s) {
            fre[c - '0']++; 
        }

        bool is_k_good = true;
        for (int i = 0; i <= k; i++) { 
            if (fre[i] == 0) { 
                is_k_good = false;
                break;
            }
        }
        if (is_k_good) count++; 
    }

    cout << count << endl; 
    return 0;
}