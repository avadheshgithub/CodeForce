#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n, m;
    std::cin >> n >> m;
    
    // Read the prices into a vector
    std::vector<int> prices(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> prices[i];
    }
    
    // Sort prices in ascending order
    std::sort(prices.begin(), prices.end());
    
    // Sum the first m negative prices (or until prices become non-negative)
    long long sum = 0;
    for (int i = 0; i < m && i < n && prices[i] < 0; ++i) {
        sum += prices[i]; // Add negative price (contributes to money received)
    }
    
    // Output the absolute value of the sum (money received)
    std::cout << -sum << std::endl;
    
    return 0;
}