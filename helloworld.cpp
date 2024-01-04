#include <iostream>

namespace numbers{
    double firstNum = 0;
    double secondNum = 0;
    char option;
    double yourResult = 0;
}
using namespace std;

int main(){
    cout << "=================" << std::endl;
    cout << "   Calculator  " << std::endl;
    cout << "=================" << std::endl;
    cout << "Enter your first number: ";
    cin >> numbers::firstNum;
    cout << "Enter your second number: ";
    cin >> numbers::secondNum;
    cout << "Choose your option: " << std::endl;
    cout << "+ = Add" << std::endl;
    cout << "- = Substract" << std::endl;
    cout << "* = Multiply" << std::endl;
    cout << "/ = Divide" << std::endl;
    cout << "Q = Close program" << endl;
    cout << "Choose option: ";
    cin >> numbers::option;
    switch(numbers::option) {
        case '+':
         numbers::yourResult = numbers::firstNum + numbers::secondNum;
         cout << "Your result equals: " << numbers::yourResult;
         break;
        case '-':
         numbers::yourResult = numbers::firstNum - numbers::secondNum;
         cout << "Your result equals: " << numbers::yourResult;
         break;
        case '*':
         numbers::yourResult = numbers::firstNum * numbers::secondNum;
         cout << "Your result equals: " << numbers::yourResult;
         break;
        case '/':
         numbers::yourResult = numbers::firstNum / numbers::secondNum;
         cout << "Your result equals: " << numbers::yourResult;
         break;
        case 'Q':
         cout << "Thank you! Calculator Program by Livermar";
         break;
        default:
         cout << "You wrote the valid option!";
         break;
       }
    return 0;
}