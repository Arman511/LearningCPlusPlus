#include <iostream>
#include <cmath>

int main()
{
    char operation;
    double num1;
    double num2;
    double ans;
    std::cout << "\n*******************Calculator**********************\n";
    std::cout << "What is number 1: ";
    std::cin >> num1;
    std::cout << "What is the operation (+ - * / %): ";
    std::cin >> operation;
    std::cout << "What is number 2: ";
    std::cin >> num2;

    bool found = true;
    switch (operation)
    {
    case '+':
        ans = num1 + num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '*':
        ans = num1 * num2;
        break;
    case '/':
        ans = num1 / num2;
        break;
    case '%':
        ans = fmod(num1 , num2);
        break;
    default:
        found = false;
        break;
    }
    if (found)
    {
        std::cout << "Answer of " << num1 << " " << operation << " " << num2 << " = " << ans<<'\n';
    }
    else
    {
        std::cout << "Invalid operation\n";
    }
        std::cout << "\n*************************************************\n";

    return 0;
}