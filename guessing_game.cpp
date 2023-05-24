#include <iostream>
#include <conio.h>

int main(){
    int num;
    int guess;

    srand(time(NULL));
    num = (rand()%10)+1;
    std::cout<<"+++++ Guessing Game +++++\n\n";
    int tries =4;
    do {
        tries--;
        std::cout<<"Guess the number between 1-10, you have "<<tries<<" tries left: ";
        std::cin>>guess;
    }while(num!=guess && tries>1);
    
    num==guess ? std::cout<<"Correct you did it in "<<4-tries<<" tries\n" : std::cout<<"You lost\n";
    
    std::cout<<"Press enter to continue . . .";
    getch();
    return 0;
    




}