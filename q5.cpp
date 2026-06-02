#include <iostream>
#include <limits>
#include <cstdlib> // for abs()

using namespace std;

// Function to calculate sum of digits
int sumOfDigits(long long num) {
    num = llabs(num); // Handle negative numbers
    int sum = 0;
    while (num > 0) {
        sum += num % 10; // Extract last digit and add to sum
        num /= 10;       // Remove last digit
    }
    return sum;
}

int main() {
    long long number;

    cout << "Enter an integer: ";

    // Input validation
    if (!(cin >> number)) {
        cout << "Invalid input. Please enter a valid integer." << endl;
        return 1;
    }

    int result = sumOfDigits(number);
    cout << "Sum of digits: " << result << endl;

    return 0;
}
