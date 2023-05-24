#include <iostream>
#include <conio.h>
void showBalance(double balance,bool newBalance);
double deposit();
double withdraw();
void wait();


int main()
{

    double balance = 0;
    int choice = 0;
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
            balance += deposit();
            showBalance(balance, true);
            break;
        case 3:
            balance -= withdraw();
            showBalance(balance, true);
            break;
        case 4:
            break;
        default:
            std::cout << "Invalid selection\n";
            break;
        }
    } while (choice != 4);
    std::cout << "\n++++++++++++++++++++++++\n\n";
    wait();
    return 0;
}

void showBalance(double balance, bool newBalance)
{
    std::cout << "\n";
    if(newBalance) { std::cout<<"New ";}
    std::cout <<"Balance is $" << balance << "\n";
    wait();
}
double deposit()
{
    double deposit;
    std::cout << "How much do you want to deposit $";
    std::cin>>deposit;
    return deposit;
}
double withdraw() {
    double remove;
    std::cout << "How much do you want to withdraw $";
    std::cin>>remove;
    return remove;

}

void wait(){
     std::cout << "\nPress enter to continue . . .";
    getch();
}