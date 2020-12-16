#include <cstring>
#include <iostream>
#include <stdbool.h>
#include <string>
using namespace std;

bool isPalindrome(string s)
{
    int len = s.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (s.at(i) != s.at(len - i - 1))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int largest = 0;
    for (int i = 100; i < 1000; i++)
    {
        for (int j = 100; j < 1000; j++)
        {
            if (isPalindrome((to_string(i * j))) && (i * j) > largest)
            {
                largest = i * j;
            }
        }
    }
    cout << largest;
}

