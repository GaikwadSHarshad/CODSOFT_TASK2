#CODSOFT TASK 2
#include <iostream>

using namespace std;

int main() {

    double no1, no2;
    char operation;

    cout << "Enter first number: ";
    cin >> no1;

    cout << "Enter second number: ";
    cin >> no2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    
    switch (operation) {
        case '+':
            cout << "Result: " << no1 + no2 << endl;
            break;
        case '-':
            cout << "Result: " << no1 - no2 << endl;
            break;
        case '*':
            cout << "Result: " << no1 * no2 << endl;
            break;
        case '/':
        
            if (no2 != 0) {
                cout << "Result: " << no1 / no2 << endl;
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation. Please enter +, -, *, or /." << endl;
            break;
    }

    return 0;
}

