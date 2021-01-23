#include <iostream>
#include <string>
#include <cmath>
using namespace std;

// Doing big number calculations without bignum libraries

int main()
{
    string bignum = to_string(pow(2, 1000));
    int ans = 0;
    string::iterator it = bignum.begin();
    while (it != bignum.end())
    {
        // Remember that it is a string, so the "numbers" are characters, convert back to int
        // '.' character in ASCII is 46, so we have to ignore it
        if (*it != '.')
            ans += (*it - '0');
        it++;
    }
    cout << ans << endl;
}
