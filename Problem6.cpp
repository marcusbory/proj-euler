/*Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>
using namespace std;

int square(int x);
int sumOfSquares(int n);
int squareOfSum(int n);

int main()
{
    cout << squareOfSum(100) - sumOfSquares(100);
}

int square(int x)
{
    return x * x;
}

int sumOfSquares(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += (square(i));
    }
    return sum;
}

int squareOfSum(int n)
{
    int sum = n * (n + 1) / 2;
    return square(sum);
}