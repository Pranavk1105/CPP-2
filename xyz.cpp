#include <iostream>
using namespace std;

int main() {
    // Declare variables to store user input
    int num1, num2, sum;

    // Prompt the user for the first number
    cout << "Enter the first number: ";
    cin >> num1;

    // Prompt the user for the second number
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform addition
    sum = num1 + num2;

    // Display the result
    cout << "The sum of " << num1 << " and " << num2 << " is: " << sum << endl;

    return 0;
}
