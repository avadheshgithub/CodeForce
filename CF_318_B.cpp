// Codeforce_318_B Strings of Power

#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    cin >> s;

    long long count = 0;
    long long ans = 0;

    // Count total "metal"
    for(int i = 0; i + 4 < s.length(); i++) {
        if(s.substr(i, 5) == "metal") {
            count++;
        }
    }

    // Count valid pairs
    for(int i = 0; i + 4 < s.length(); i++) {
        if(s.substr(i, 5) == "heavy") {
            ans += count;
        }
        if(s.substr(i, 5) == "metal") {
            count--;
        }
    }

    cout << ans;

    return 0;
}