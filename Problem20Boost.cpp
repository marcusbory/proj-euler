#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;

// Solve using bignum libraries

boost::multiprecision::cpp_int factorial(int n);

int main()
{
    boost::multiprecision::cpp_int total = factorial(100), ans = 0;
    while(total != 0)
    {
        ans+=(total%10);
        total/=10;
    }
    cout << ans << endl;
}

boost::multiprecision::cpp_int factorial(int n)
{
    int i = n;
    boost::multiprecision::cpp_int fact = 1;
    while (i != 0)
        fact*=i--;
    return fact;
}
