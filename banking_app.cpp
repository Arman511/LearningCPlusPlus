#include <iostream>
#include <conio.h>
void showBalance(double balance, bool newBalance);
double deposit();
double withdraw(double balance);
void waitEnter();

int main()
{

    double balance = 0;
    int choice = 0;
    double temp;
    do
    {
        std::cout << "\n\n++++ Banking System ++++\n++++++++++++++++++++++++\n1. Show Balance\n2. Deposit balance\n3. Withdraw Money\n4. Exit\nEnter Choice: ";
        std::cin >> choice;

        switch (choice)
        {
        case 1:
            showBalance(balance, false);
            break;
        case 2:
            temp = deposit();
            balance += temp;
            temp == 0 ? showBalance(balance, false) : showBalance(balance, true);
            break;
        case 3:
            temp = withdraw(balance);
            balance -= temp;
            temp == 0 ? showBalance(balance, false) : showBalance(balance, true);
            break;
        case 4:
            break;
        default:
            std::cout << "Invalid selection\n";
            break;
        }
    } while (choice != 4);
    std::cout << "\n++++++++++++++++++++++++\n\n";
    waitEnter();
    return 0;
}

void showBalance(double balance, bool newBalance)
{
    std::cout << "\n";
    if (newBalance)
    {
        std::cout << "New ";
    }
    std::cout << "Balance is $" << balance << "\n";
    waitEnter();
}
double deposit()
{
    double deposit;
    std::cout << "\nHow much do you want to deposit $";
    std::cin >> deposit;
    if (deposit < 0)
    {
        std::cout << "\nYou cannot deposit a negative number.\n";
        deposit = 0;
    }

    return deposit;
}
double withdraw(double balance)
{
    double remove;
    std::cout << "\nHow much do you want to withdraw $";
    std::cin >> remove;
    if (remove > balance)
    {
        std::cout << "\nYou cannot withdraw more than what you currently have.\n";
        remove = 0;
    }
    else if (remove < 0)
    {
        std::cout << "\nYou cannot withdraw a negative number.\n";
        remove = 0;
    }

    return remove;
}

void waitEnter()
{
    std::cout << "\nPress enter to continue . . .";
    getch();
}