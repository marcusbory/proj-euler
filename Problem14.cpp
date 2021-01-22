#include <iostream>
#define LIMIT 1000000
using namespace std;

void collatz(long* counts, int n, long& maxCollatz, int& maxi);

int main()
{
    long maxCollatz = 0;
    int maxi = 1;
    long* counts = new long[1000001]; // for memoization, can solve within 1s
    counts[1] = 0; // collatz conjecture of 1 is 0 (0 steps needed to reach 1, trivial)

    for (int i = 2; i < LIMIT; i++)
    {
        collatz(counts, i, maxCollatz, maxi);
    }

    cout << maxi << " gives Collatz count of " << maxCollatz << endl;
    delete[] counts;
    counts = NULL;
}

void collatz(long* counts, int n, long& maxCollatz, int& maxi)
{
    long count = 0;
    long long num = n;
    while (num != 1)
    {
        if (num < LIMIT && counts[num] != 0)
            break;
        num = (num%2==0) ? (num/2) : (num*3+1);
        count++;
    }
    count += counts[num];
    counts[n] = count;

    if (count > maxCollatz)
    {
        maxCollatz = count;
        maxi = n;
    }
}
