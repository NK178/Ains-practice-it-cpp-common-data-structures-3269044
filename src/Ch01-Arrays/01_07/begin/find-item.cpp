#include <iostream>
#include <string>
using namespace std;

template <typename T>
int findItem(const T arr[], size_t size, T target)
{
    // TODO: implement

    // Compare with array to find index
    for (size_t i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    const string nameList[] = {"John", "James", "Ains", "Henry", "Emily", "Chole"};
    size_t size = sizeof(nameList) / sizeof(nameList[0]);

    // dont use const char , use a string
    int result = -2;
std:
    string item = "Ains";
    result = findItem(nameList, size, item);
    cout << "The Result: " << result;
    int stop;
    cin >> stop; 

    return 0;
}
