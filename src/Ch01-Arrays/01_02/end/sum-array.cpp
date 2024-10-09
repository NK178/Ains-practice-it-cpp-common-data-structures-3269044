#include <iostream>
using namespace std;

int calculateSum(const int arr[], size_t size)
{
    //...TODO: implement
    // Store sum of int
    int Sum = 0;

    // Check if array is not empty
    if (size > 0)
    {
        // Add each element of array into Sum
        for (int i = 0; i < size; i++)
        {
            Sum = Sum + arr[i];
        }
    }

    // return sum
    return Sum;
}

int main()
{
    const int ints[]{1, -7, 17};
    cout << "The sum of all elements in the array is " << calculateSum(ints, 3) << endl;
}