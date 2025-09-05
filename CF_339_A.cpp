#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    
    // If the string is a single number, print it directly
    if (n == 1) {
        cout << s << endl;
        return 0;
    }
    
    // Count occurrences of '1', '2', and '3'
    int count1 = 0, count2 = 0, count3 = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') count1++;
        else if (s[i] == '2') count2++;
        else if (s[i] == '3') count3++;
    }
 
    string result = "";
    bool first = true; // To handle '+' addition
    for (int i = 0; i < count1; i++) {
        if (!first) result += '+';
        result += '1';
        first = false;
    }
    for (int i = 0; i < count2; i++) {
        if (!first) result += '+';
        result += '2';
        first = false;
    }
    for (int i = 0; i < count3; i++) {
        if (!first) result += '+';
        result += '3';
        first = false;
    }
    
    cout << result << endl;
    return 0;
}