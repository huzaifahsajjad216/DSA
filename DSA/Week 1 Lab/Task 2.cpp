#include <iostream>
#include <string>
using namespace std;

// Linear Search using template
template <typename T, size_t N>
int linearSearch(T (&arr)[N], T value)
{
    for (size_t i = 0; i < N; i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }

    return -1;
}

// Function to print search result
template <typename T>
void printSearchResult(int index, T key)
{
    if (index != -1)
    {
        cout << key << " found at index " << index << endl;
    }
    else
    {
        cout << key << " not found in the array" << endl;
    }
}

int main()
{
    // Integer array
    int intArray[5] = {64, 25, 12, 22, 11};

    int intKey = 12;

    int intIndex = linearSearch(intArray, intKey);

    printSearchResult(intIndex, intKey);


    // Float array
    float floatArray[4] =
    {
        3.14,
        2.71,
        1.62,
        0.57
    };

    float floatKey = 1.62;

    int floatIndex = linearSearch(floatArray, floatKey);

    printSearchResult(floatIndex, floatKey);


    // String array
    string stringArray[4] =
    {
        "apple",
        "orange",
        "banana",
        "grape"
    };

    string stringKey = "banana";

    int stringIndex = linearSearch(stringArray, stringKey);

    printSearchResult(stringIndex, stringKey);

    return 0;
}