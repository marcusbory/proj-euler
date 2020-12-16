/*By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10001st prime number?
*/
#include <iostream>
#include <stdbool.h>
#include <cmath>

bool isPrime(int x);
using namespace std;

int main()
{
    int count = 1, n = 3, x;
    cin >> x;
    while (count < x)
    {
        if (isPrime(n))
        {
            count += 1;
        }
        n += 2;
    }
    cout << n-2;
}

bool isPrime(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}