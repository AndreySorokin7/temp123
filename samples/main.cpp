#include <iostream>
#include "include\calc.hpp"

using namespace std;

int main() {
    float num1, num2;
    char operation;

    cout << "������� ������ �����: ";
    cin >> num1;
    cout << "������� �������� (+, -, *, /): ";
    cin >> operation;
    cout << "������� ������ �����: ";
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
        cout << "�������� ��������" << endl;
        return 0;
    }
    
    cout << "���������: " << calc(num1,num2,operation) << endl;

    return 0;
}