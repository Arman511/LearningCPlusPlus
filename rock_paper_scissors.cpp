#include <iostream>
#include <conio.h>
void waitEnter();
char getHumanChoice();
void win();
void loss();
void tie();

int main()
{
    srand(time(NULL));
    int ai;
    char human;
    int wins = 0;
    int losses = 0;
    int ties = 0;
    std::cout << "\n+++++ Rock Paper Scissors +++++";
    do
    {
        ai = (rand() % 3) + 1;
        human = getHumanChoice();
        switch (ai)
        {
        case 1:
            switch (human)
            {
            case 'r':
                ties++;
                tie();
                break;
            case 'p':
                wins++;
                win();
                break;
            case 's':
                losses++;
                loss();
                break;
            }
            break;
        case 2:
            switch (human)
            {
            case 'r':
                losses++;
                loss();
                break;

            case 'p':
                ties++;
                tie();
                break;

            case 's':
                wins++;
                win();
                break;
            }
            break;
        case 3:
            switch (human)
            {
            case 'r':
                wins++;
                win();
                break;
            case 'p':
                losses++;
                loss();
                break;
            case 's':
                ties++;
                tie();
                break;
            }
            break;
        }

    } while (human != 'e');

    std::cout << "\nWins: " << wins << "\nLosses: " << losses << "\nTies: " << ties << "\n\n";
    if (wins == 0 && losses == 0 && ties == 0)
    {
        std::cout << "Coward";
    }
    else if (wins > losses)
    {
        std::cout << "I'll be back";
    }
    else if (losses > wins)
    {
        std::cout << "The flesh is weak, steel is eternal";
    }
    else if (losses == wins == ties)
    {
        std::cout << "Perfectly Balanced, as All Things Should Be";
    }
    else
    {
        std::cout << "gg";
    }

    std::cout << "\n\n+++++++++++++++++++++++++++++++\n";
    waitEnter();
    return 0;
}

void waitEnter()
{
    std::cout << "\nPress enter to continue . . .";
    getch();
}

char getHumanChoice()
{
    std::cout << "\n\n+++++++++++++++++++++++++++++++\n";
    char ans;
    do
    {
        std::cout << "\n'r' for Rock\n'p' for Paper\n's' for Scissors\n'e' for Exit\nEnter Choice: ";
        std::cin >> ans;
        if (ans != 'r' && ans != 'p' && ans != 's' && ans != 'e')
        {
            std::cout << "\nInvalid option\n";
            waitEnter();
        }
    } while (ans != 'r' && ans != 'p' && ans != 's' && ans != 'e');
    return ans;
}

void tie()
{
    std::cout << "\nIt's a tie\n";
    waitEnter();
}

void win()
{
    std::cout << "\nYou won!\n";
    waitEnter();
}

void loss()
{
    std::cout << "\nYou lost\n";
    waitEnter();
}