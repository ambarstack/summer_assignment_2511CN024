#include <iostream>
using namespace std;
// Function to reverse a number
int reverseNumber(int num) {
   int reversed = 0;
   while (num != 0) {
       int remainder = num % 10; // Extract the last digit
       reversed = reversed * 10 + remainder; // Append it to the reversed number
       num /= 10; // Remove the last digit
   }
   return reversed;
}
int main() {
   int number;
   cout << "Enter an integer: ";
   cin >> number;
   int reversedNumber = reverseNumber(number);
   cout << "Reversed Number = " << reversedNumber << endl;
   return 0;
}