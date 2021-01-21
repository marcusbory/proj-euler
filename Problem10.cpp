#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n);

int main()
{
    long ans = 0;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(i))
            ans+=i;
    }
    cout << ans << endl;
}

bool isPrime(int n)
{
    if (n==0 || n==1)
        return false;
    
    if (n==2)
        return true;

    if (n%2==0)
        return false;

    for (int i = 3; i <= sqrt(n); i+=2)
    {
        if (n%i==0)
            return false;
    }
    return true;
}
