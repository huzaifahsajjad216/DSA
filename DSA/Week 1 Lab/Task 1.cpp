#include <iostream>
#include <string>
using namespace std;

// Function to print array
template <typename T, size_t N>
void printArray(T (&arr)[N])
{
    for (size_t i = 0; i < N; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
}

// Selection Sort using template
template <typename T, size_t N>
void selectionSort(T (&arr)[N])
{
    for (size_t i = 0; i < N - 1; i++)
    {
        size_t smallSub = i;

        for (size_t j = i + 1; j < N; j++)
        {
            if (arr[j] < arr[smallSub])
            {
                smallSub = j;
            }
        }

        // Swap
        swap(arr[i], arr[smallSub]);
    }
}

int main()
{
    // Test with integer array
    int intArray[5] = {64, 25, 12, 22, 11};

    cout << "Original integer array: ";
    printArray(intArray);

    selectionSort(intArray);

    cout << "Sorted integer array: ";
    printArray(intArray);


    // Test with string array
    string stringArray[4] =
    {
        "apple",
        "orange",
        "banana",
        "grape"
    };

    cout << "\nOriginal string array: ";
    printArray(stringArray);

    selectionSort(stringArray);

    cout << "Sorted string array: ";
    printArray(stringArray);

    return 0;
}