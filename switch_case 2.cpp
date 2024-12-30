#include <iostream>

int main() {
    int choice;
    float num1, num2;

    std::cout << "Simple Calculator" << std::endl;
    std::cout << "1. Addition" << std::endl;
    std::cout << "2. Subtraction" << std::endl;
    std::cout << "3. Multiplication" << std::endl;
    std::cout << "4. Division" << std::endl;
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    switch (choice) {
        case 1:
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case 2:
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case 3:
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case 4:
            if (num2 != 0) {
                std::cout << "Result: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Error: Division by zero is not allowed" << std::endl;
            }
            break;
        default:
            std::cout << "Invalid choice" << std::endl;
            break;
    }

    return 0;
}