/*
Divisible
Pawelski
5/3/2021
This program has a function that checks if all the numbers
within the passed array are divisible by 10.
*/
#include <iostream>
using namespace std;

/*
Checks if all the numbers in array are divisible by 10.
This function uses a trick in which we look for an example
that proves the desired outcome wrong (in our case, a number
that is not divisible by 10).
*/
bool divisible(int array[], int length)
{
    for (int i = 0; i < length; i++)
    {
        if (array[i] % 10 != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    const int ARRAY_LENGTH = 10;
    int numbers1[ARRAY_LENGTH] = { 10, 20, 30, 40, 50 };
    int numbers2[ARRAY_LENGTH] = { 1, 2, 3, 4, 5 };
    int numbers3[ARRAY_LENGTH] = { 10, 20, 30, 40, 5 };
    cout << "All elements in numbers1 are divisible by 10? " 
        << divisible(numbers1, ARRAY_LENGTH) << "\n";
    cout << "All elements in numbers2 are divisible by 10? "
        << divisible(numbers2, ARRAY_LENGTH) << "\n";
    cout << "All elements in numbers3 are divisible by 10? "
        << divisible(numbers3, ARRAY_LENGTH) << "\n";
    return 0;
}
