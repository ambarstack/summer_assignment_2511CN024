#include <iostream>
#include <limits> // For numeric_limits
using namespace std;

// Function to calculate product of digits
long long productOfDigits(long long num) {
    num = llabs(num); // Handle negative numbers
    if (num == 0) return 0; // Special case: product of digits of 0 is 0

    long long product = 1;
    while (num > 0) {
        int digit = num % 10;
        product *= digit;
        num /= 10;
    }
    return product;
}

int main() {
    long long number;

    cout << "Enter an integer: ";

    // Input validation
    if (!(cin >> number)) {
        cout << "Invalid input. Please enter a valid integer.\n";
        return 1;
    }

    long long result = productOfDigits(number);
    cout << "Product of digits: " << result << endl;

    return 0;
}

