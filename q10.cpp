#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false; // 0, 1, and negatives are not prime
    if (num == 2) return true; // 2 is prime
    if (num % 2 == 0) return false; // Even numbers > 2 are not prime

    // Check divisibility up to sqrt(num)
    for (int i = 3; i <= sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int start, end;

    cout << "Enter start of range: ";
    if (!(cin >> start)) {
        cerr << "Invalid input. Please enter integers only.\n";
        return 1;
    }

    cout << "Enter end of range: ";
    if (!(cin >> end)) {
        cerr << "Invalid input. Please enter integers only.\n";
        return 1;
    }

    // Swap if start > end
    if (start > end) {
        cout << "Note: Start is greater than end. Swapping values.\n";
        swap(start, end);
    }

    cout << "Prime numbers between " << start << " and " << end << " are:\n";
    bool found = false;
    for (int num = start; num <= end; num++) {
        if (isPrime(num)) {
            cout << num << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "No prime numbers found in this range.";
    }
    cout << endl;

    return 0;
}
