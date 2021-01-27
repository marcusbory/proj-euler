#include <iostream>
#include <cmath>
using namespace std;

int sumOfDivisors(int n);
bool isAmicable(int n);

int main()
{
    int sum = 0;
    for (int i = 1; i < 10000; i++)
    {
        if (isAmicable(i))
            sum+=i;
    }
    cout << sum << endl;
}

int sumOfDivisors(int n)
{
    int temp = n, sum = 0;
    for (int i = 2; i <= sqrt(temp); i++)
    {
        if (temp%i == 0)
            sum+=(i+(temp/i));
    }
    return sum+1;
}

bool isAmicable(int n)
{
    if (n != sumOfDivisors(n))
        return (n == sumOfDivisors(sumOfDivisors(n))); 
    return false;
}
