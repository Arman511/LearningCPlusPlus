#include <iostream>
#include <conio.h>

int main()
{
    int num;
    int guess;

    srand(time(NULL));
    num = (rand() % 100) + 1;
    std::cout << "\n\n+++++ Guessing Game +++++\n\n";
    int tries = 0;
    do
    {
        tries++;
        std::cout << "Guess the number between 1-100: ";
        std::cin >> guess;

        if (num > guess)
        {
            std::cout << "Too Low\n";
        }
        else if (num < guess)
        {
            std::cout << "Too High\n";
        }
    } while (num != guess);

    std::cout << "Correct you did it in " << tries<<" tries";
    std::cout << "\n\n++++++++++++++++++++++++++\n\n";
    std::cout << "Press enter to continue . . .";
    getch();
    return 0;
}