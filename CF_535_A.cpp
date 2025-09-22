#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n; // Input: 0 <= n <= 99

    string ones[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    if (n < 10){
        cout << ones[n];
    }
    else if (n < 20) {
        cout << teens[n - 10];
    }
    else {
        cout << tens[n / 10];
        if (n % 10 != 0) {
            cout << "-" << ones[n % 10]; 
        }
    }
    cout << endl; 
    return 0;
}