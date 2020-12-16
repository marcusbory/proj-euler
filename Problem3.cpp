/*
* The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Use long long to store 600851475143 without overflow
    long long num, largest = 1, curr;
    cin >> num;
    curr = num;

    // Keep dividing by f until curr becomes 1; more efficient method
    for (long long f = 2; curr != 1 && f < num; f++)
    {
        while (curr % f == 0)
        {
            curr /= f;
            largest = f;
        }
    }

    if (largest == 1)
    {
        cout << "Input is prime number" << endl;
    }
    else
    {
        cout << largest << endl;
    }
}


