#include "include\calc.hpp"
float calc(float num1, float num2, char operation) {
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
        
        return 0;
    }
    return result;
}