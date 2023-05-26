#include <iostream>

int sumOddNum(const std::string cardNumber);
int sumSecNum(const std::string cardNumber);

int main()
{

    std::cout << "What is your card number(16 digits): ";
    std::string number;
    std::cin >> number;

    int sum = sumSecNum(number) + sumOddNum(number);

    std::cout << ((sum % 10 == 0) ? "The card number given is valid" : "The card number given is invalid");

    return 0;
}

int sumOddNum(const std::string cardNumber)
{
    int total = 0;
    for (int i = cardNumber.length() - 1; i >= 0; i -= 2)
    {
        total += (cardNumber[i] - '0');
    }
    return total;
}
int sumSecNum(const std::string cardNumber)
{
    int total = 0;
    int num;
    for (int i = cardNumber.length() - 2; i >= 0; i -= 2)
    {
        num = (cardNumber[i] - '0') * 2;
        if (num > 9)
        {
            total += num % 10;
            total += num / 10;
        }
        else
        {
            total += num;
        }
    }
    return total;
}