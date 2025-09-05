#include <iostream>
#include <algorithm>

int main() {
    int n, a, b;
    // Read input: n (total people), a (min people in front), b (max people behind)
    std::cin >> n >> a >> b;
    
    // Calculate the range of valid positions
    int min_position = a + 1;          // Must have at least 'a' people in front
    int max_position = n - b;          // Must have at most 'b' people behind
    
    // Ensure positions are within bounds [1, n]
    min_position = std::max(1, min_position);
    max_position = std::min(n, max_position);
    
    // Calculate number of valid positions
    int result = std::max(0, max_position - min_position + 1);
    
    // Output the result
    std::cout << result << std::endl;
    
    return 0;
}