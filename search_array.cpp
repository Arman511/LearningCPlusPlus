#include <iostream>

int searchArray(int array[], int size, int element);

int main()
{
    srand(time(NULL));
    int arr[10];
    std::cout << "{ ";
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        arr[i] = rand() % 100;
        std::cout << arr[i] << " ";
    }
    std::cout << "}\nWhat Number do you want to find: ";
    int num;
    std::cin>>num;
    int position = searchArray(arr, sizeof(arr) / sizeof(int), num);
    position != -1 ? std::cout<<"The number was found at position: "<<position : std::cout<<num<<" is not in the array"; 
}

int searchArray(int array[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(array[i]==element){
            return i;
        }
    }
    return -1;
}