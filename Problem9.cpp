#include <iostream>

using namespace std;

void triplet(int n);

int main()
{
    int n;
    cin >> n;
    triplet(n);
}

void triplet(int n)
{
    int i = 1, j,k;
    for (;; i++)
    {
        j = i + 1;
        k = n - i - j;
        for(;j<k;j++,k--)
        {
            if (i*i + j*j == k*k)
            {
                cout << i*j*k << endl;
                return;
            }
        }
    }
}
