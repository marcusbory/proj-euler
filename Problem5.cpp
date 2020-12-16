/*2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>
#include <stdbool.h>

using namespace std;

bool isDivisible(int x);

int main()
{
    int n;
    cin >> n;
    // Brute force approach
    for (int i = 2520; ; i++)
    {
        if (isDivisible(i))
        {
            cout << i;
            return 0;
        }
    }
}

bool isDivisible(int x)
{
    for (int i = 2; i < 20; i++)
    {
        if (x % i != 0)
        {
            return false;
        }
    }
    return true;
}