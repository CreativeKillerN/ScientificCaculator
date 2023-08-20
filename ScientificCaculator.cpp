#include <iostream>
#include <cmath>

int main() {
    double num1, num2;
    char operation;

    std::cout << "Welcome to the Scientific Calculator!" << std::endl;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter an operation (+, -, *, /, ^, sqrt): ";
    std::cin >> operation;

    if (operation == 'sqrt') {
        std::cout << "Result: " << sqrt(num1) << std::endl;
    } else if (operation != '^') {
        std::cout << "Enter second number: ";
        std::cin >> num2;

        switch (operation) {
            case '+':
                std::cout << "Result: " << num1 + num2 << std::endl;
                break;
            case '-':
                std::cout << "Result: " << num1 - num2 << std::endl;
                break;
            case '*':
                std::cout << "Result: " << num1 * num2 << std::endl;
                break;
            case '/':
                if (num2 != 0) {
                    std::cout << "Result: " << num1 / num2 << std::endl;
                } else {
                    std::cout << "Error: Division by zero" << std::endl;
                }
                break;
            case '^':
                std::cout << "Result: " << pow(num1, num2) << std::endl;
                break;
            default:
                std::cout << "Invalid operation" << std::endl;
        }
    }

    return 0;
}
