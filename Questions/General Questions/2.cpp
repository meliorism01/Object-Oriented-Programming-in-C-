// Create a variadic function that takes any number of inputs from the user and computes the sum 


//Solution
#include <iostream>
using namespace std;

// Base case
int sum() {
    return 0;
}

// Recursive variadic function
template<typename T, typename... Args>
auto sum(T first, Args... rest) {
    return first + sum(rest...);
}

int main() {
    cout << sum(10, 20, 30, 40) << endl;          // 100
    cout << sum(1, 2, 3, 4, 5, 6) << endl;        // 21
    cout << sum(5.5, 4.5, 10) << endl;            // 20
    return 0;
} 