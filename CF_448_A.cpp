#include <iostream>
using namespace std;

int main() {
    int a1, a2, a3, b1, b2, b3, n;
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3 >> n;

    int total_cups = a1 + a2 + a3;
    int total_medals = b1 + b2 + b3;

    int cups_shelves = (total_cups + 4) / 5; 
    int medals_shelves = (total_medals + 9) / 10; 

    if (cups_shelves + medals_shelves <= n) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}