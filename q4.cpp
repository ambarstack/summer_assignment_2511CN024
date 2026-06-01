#include <iostream>
#include <limits> // For numeric_limits
#include <cmath>  // For abs()

using namespace std;

// Function to count digits in a number
int countDigits(long long num) {
    // Handle zero explicitly
    if (num == 0) return 1;

    // Convert to positive for counting
    num = llabs(num);

    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    long long number;

    cout << "Enter an integer: ";

    // Input validation
    if (!(cin >> number)) {
        cout << "Invalid input. Please enter a valid integer.\n";
        return 1;
    }

    int digits = countDigits(number);
    cout << "Number of digits: " << digits << endl;

    return 0;
}
