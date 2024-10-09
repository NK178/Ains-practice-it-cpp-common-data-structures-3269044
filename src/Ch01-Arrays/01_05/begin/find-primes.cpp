#include <iostream>
#include <vector>

using namespace std;

/*bool IsPrime(const int &number)


{

    bool result = false;

    // check if the number is odd
    if (number % 2 != 0)
    {
        int num = sqrt(number);
        bool _A_Prime_ = true;

        // Check if divisible by odd numbers, up to the square root of the number
        for (int i = 3; i < num; i += 2)
        {
            _A_Prime_ = true;
            if (num % i == 0)
            {
                _A_Prime_ = false;
                break; // not prime
            }
        }

        if (_A_Prime_ == true)
        {
            result = true;
        }
    }
    // Check if number is 2 (only even prime)
    else if (number == 2)
    {
        result = true;
    }

    return result;
}*/

bool IsPrime(const int &number)
{
    // Check if number is less than 2 (not prime)
    if (number < 2)
    {
        return false;
    }

    // Each of the 2 factors  cannot be more than the square root of the number
    // Hence , x < sqrt(num), y < sqrt(num), atleast one must be less then sqrt(num), thus x * x <= num
    for (int i = 2; i * i <= number; i++)
    {
        // a factor that has no remainder = not prime
        if (number % i == 0)
        {
            return false;
        }
    }

    return true;
}
void findPrimes(const int arr[], size_t size, std::vector<int> &primes)
{
    // TODO: Implement

    // Get number from array
    int num_arr = 0;

    for (int i = 0; i < size; i++)
    {
        num_arr = arr[i];

        // if prime number
        if (IsPrime(num_arr) == true)
        {
            // add into vector
            primes.push_back(num_arr);
        }
    }
}

int main()
{
    int numbers[]{4, 7, 12, 3, 9, 17, 29};
    // int numbers[]{29, 37,41};

    size_t size = sizeof(numbers) / sizeof(numbers[0]);
    vector<int> primes;

    findPrimes(numbers, size, primes);

    if (primes.empty())
    {
        cout << "No prime numbers found in the array.";
    }
    else
    {
        cout << "The prime numbers in the array are:";
        for (int prime : primes)
        {
            cout << " " << prime;
        }
        cout << endl;
    }
    return 0;
}
