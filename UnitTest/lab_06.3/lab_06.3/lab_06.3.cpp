#include <iostream>
#include <vector>
#include <iomanip> 
#include <algorithm> 

void generateArray(std::vector<int>& arr, int minVal, int maxVal)
{
    for (int& elem : arr)
    {
        elem = minVal + rand() % (maxVal - minVal + 1);
    }
}

void printArray(const std::vector<int>& arr)
{
    for (const int& elem : arr)
    {
        std::cout << std::setw(5) << elem;
    }
    std::cout << std::endl;
}

void sortArray(std::vector<int>& arr)
{
    std::sort(arr.begin(), arr.end());
}

int main()
{
    srand(time(0));

    const int SIZE = 10;
    const int MIN_VAL = -50;
    const int MAX_VAL = 50;

    std::vector<int> arr(SIZE);


    generateArray(arr, MIN_VAL, MAX_VAL);


    std::cout << "Початковий масив:" << std::endl;
    printArray(arr);


    sortArray(arr);


    std::cout << "Відсортований масив за не спаданням:" << std::endl;
    printArray(arr);

    return 0;
}
