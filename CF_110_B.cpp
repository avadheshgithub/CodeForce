#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    char arr[4] = {'a', 'b', 'c', 'd'};

    for(int i = 0; i < n; i++) {
        cout << arr[i % 4];
    }

    return 0;
}