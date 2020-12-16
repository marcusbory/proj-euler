/*
* If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include <iostream>
using namespace std;

int main()
{
    int limit, sum = 0;
    cin >> limit;
    for (int i = 3; i < limit; i++)
    {
        // To find all multiples of 3 or 5 and sum them
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }

    cout << sum;
}

