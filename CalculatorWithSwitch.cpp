#include <iostream>
#include <algorithm>

// Four Function Calculator Using Switch Case
// Gwen Bruggeman (3/18/2022)

int main(){

    // Local variables with low-memory-size types only initialized once
    char operation;
    float operand1, operand2;

    while (true){
        
        // User-friendly input order
        std::cout << "Please enter first number: ";
        std::cin >> operand1;
        
        std::cout << "Please enter operation (+-*/): ";
        std::cin >> operation;

        std::cout << "Please enter second number: ";
        std::cin >> operand2;

        ///////////////////////////////////////////////////////////////////////////////////
        // TODO: Confirm inputs are float and char respectively, with no letters or spaces

        // Single output line before switch case to reduce repeat code
        std::cout << operand1 << " " << operation << " " << operand2 << " = ";

        switch(operation){

            case '+':
                std::cout << operand1 + operand2;
                break;

            case '-':
                std::cout << operand1 - operand2;
                break;

            case '*':
                std::cout << operand1 * operand2;
                break;

            case '/':
                std::cout << operand1 / operand2;
                break;

            // Incorrect function message
            default:
                std::cout << "input error";
                break;
        }
        std::cout << "\n\n";
    }
    return 0;
}