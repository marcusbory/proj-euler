/*
* Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:

1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...

By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
*/
#include <iostream>
using namespace std;

int main()
{
    int first = 1, second = 2, temp, sum = 0;
    while (second <= 4000000)
    {
        // Assertion that first number in fibonacci sequence is odd
        if (second % 2 == 0)
        {
            sum += second;
        }

        // Method for finding the next fibonacci number
        temp = first;
        first = second;
        second = temp + first;
    }
    cout << sum;
}
