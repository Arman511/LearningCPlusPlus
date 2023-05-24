#include <iostream>
#include <conio.h>

int main()
{
    double temp;
    char type;

    std::cout << "\n***** Temperature Converter *****\n";

    std::cout << "F = Fahrenheit\nC = Celsius\nWhat Unit do you want to convert to: ";
    std::cin >> type;

    std::cout << "What is the temperature: ";
    std::cin >> temp;
    double ans = -500;
    if (type == 'F' || type == 'f')
    {
        ans = (temp * 1.8) + 32;
        std::cout << "The temperature in Fahrenheit is: " << ans << "F\n";
    }
    else if (type == 'C' || type == 'c')
    {
        ans = (temp - 32) / 1.8;
        std::cout << "The temperature in Celsius is: " << ans << "C\n";
    }
    else
    {
        std::cout << "That is an invalid option\n";
    }

    std::cout << "\n*********************************\n";
    std::cout << "Press enter to continue . . .";

    getch();
}