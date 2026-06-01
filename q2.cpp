#include <iostream>
using namespace std;
int main() {
   int number;
   // Prompt user for input
   cout << "Enter a number to print its multiplication table: ";
   cin >> number;
   // Loop to generate the multiplication table
   for (int i = 1; i <= 10; ++i) {
       cout << number << " * " << i << " = " << number * i << endl;
   }
   return 0;
}