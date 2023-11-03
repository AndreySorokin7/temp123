#include <iostream>
#include "include\calc.hpp"

using namespace std;

int main() {
    float num1, num2;
    char operation;

    cout << "Введите первое число: ";
    cin >> num1;
    cout << "Введите операцию (+, -, *, /): ";
    cin >> operation;
    cout << "Введите второе число: ";
    cin >> num2;

    float result;
    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    default:
        cout << "Неверная операция" << endl;
        return 0;
    }
    
    cout << "Результат: " << calc(num1,num2,operation) << endl;

    return 0;
}