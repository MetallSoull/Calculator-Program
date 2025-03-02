#include <iostream>

using namespace std;

namespace numbers {
    double firstNumber;
    double secondNumber;
    string con;
}

namespace operations {
    int choice;

    int sum(int firstNumber, int secondNumber) {
        return firstNumber + secondNumber;
    }
    int substract(int firstNumber, int secondNumber) {
        return firstNumber - secondNumber;
    }
    int multiply(int firstNumber, int secondNumber) {
        return firstNumber * secondNumber;
    }
    double divide(double firstNumber, double secondNumber) {
        return firstNumber / secondNumber;
    }
}

using namespace operations;

int main() {
    do {
        cout << "Calculator Program" << endl;
        _sleep(1000);

        cout << "Enter first number: " << endl;
        cin >> ::numbers::firstNumber;
        cout << "Enter second number: " << endl;
        cin >> ::numbers::secondNumber;

        cout << "Choose your operation: \n"
                "1. Addition\n"
                "2. Substraction\n"
                "3. Multiplication\n"
                "4. Divide\n"
                "5. Exit\n"
                "Enter your choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Result is: " << endl;
                cout << sum(::numbers::firstNumber, ::numbers::secondNumber) << endl;
            break;
            case 2:
                cout << "Result is: " << endl;
                cout << substract(::numbers::firstNumber, ::numbers::secondNumber) << endl;
            break;
            case 3:
                cout << "Result is: " << endl;
                cout << multiply(::numbers::firstNumber, ::numbers::secondNumber) << endl;
            break;
            case 4:
                cout << "Result is: " << endl;
                cout << divide(::numbers::firstNumber, ::numbers::secondNumber) << endl;
            break;
            case 5:
                cout << "Exiting program" << endl;
            break;
            default:
                cout << "Invalid Choice!" << endl;
            break;
        }
        cout << "Would you like to continue (y/n)? " << endl;
        cin >> ::numbers::con;
    } while (::numbers::con=="y");
    cout << "Bye!" << endl;
    return 0;
}
