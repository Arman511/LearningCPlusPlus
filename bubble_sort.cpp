#include <iostream>

void bubbleSort(int arr[], int size);

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
    std::cout << "}";
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr,size);

    std::cout << "\nSorted array: \n{ ";
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "}";


    return 0;
}

void bubbleSort(int arr[], int size){
    int temp;
     for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size -i -1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}



