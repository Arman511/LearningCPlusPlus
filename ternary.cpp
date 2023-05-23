#include <iostream>
int main()
{
    int grade = 75;
    grade >= 40 ? std::cout<<"You pass!\n":std::cout<<"You fail\n";

    int num;
    std::cout<<"Input a number: ";
    std::cin>>num;
    num %2 ==1? std::cout<<"Odd\n":std::cout<<"Even\n";

    bool hungry = true;
    hungry ? std::cout<<"You are hungry\n":std::cout<<"You are full\n";

    bool sleepy = false;
    std::cout << (sleepy ? "You are sleepy\n" : "You are awake\n");

    return 0;
}