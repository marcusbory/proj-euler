#include <iostream>
#include <string>
using namespace std;

unsigned long long largest(string s1);

int main()
{
    string s;
    cin >> s;
    cout << largest(s) << endl;
}


unsigned long long largest(string s1)
{
    unsigned long long num = 0, temp = 1;
    string::iterator it;
    for (it = s1.begin(); it < s1.end() - 12; it++)
    {
        for (int i = 0; i < 13; i++)
        {
            temp *= (*(it + i) - '0');
        }

        num = (temp > num) ? temp : num;
        temp = 1;
    }
    return num;
}

