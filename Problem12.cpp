#include <iostream>
#include <cmath>
using namespace std;

unsigned long long triangleNo(long n);
int checkDivisor(unsigned long long n);

int main()
{
    int x;
    unsigned long long ans;
    long i = 1;
    cin >> x;
    for (;;i++)
    {
        unsigned long long num = triangleNo(i);
        if (checkDivisor(num) > x)
        {
            cout << num << endl;
            break;
        }
    }
    return 0;
}

unsigned long long triangleNo(long n)
{
    return (n*(n+1))/2;
}

int checkDivisor(unsigned long long n)
{
    int count = 0;
    unsigned long long num = n;
    for (int i = 1; i <= sqrt(num); i++) // every divisor exists in pairs, unless perfect square
    {
        if (n%i==0)
        {
            if (num/i == i)
                count++;
            else
                count+=2;
        }
    }
    return count;
}
