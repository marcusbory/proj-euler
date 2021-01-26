#include <iostream>
#include <vector>
using namespace std;

vector<int> factorial(int n);
// void printNum(vector<int> num);
int numSum(vector<int> num);

int main()
{
    int x;
    cin >> x;
    cout << numSum(factorial(x)) << endl;
}

vector<int> factorial(int n)
{
    vector<int> ans;
    // First number in vector is 1, for 1!
    ans.push_back(1);
    int carry = 0;

    // Each index will only contain 1 digit
    for (int i = 2; i <= n; i++)
    {
        // Performing elementary mathematics
        for (int j = 0; j < ans.size(); j++)
        {
            int temp = ans[j]*i;
            ans[j] = (temp+carry)%10;
            carry = (temp+carry)/10;
        }
        // Remaining carry
        while (carry != 0)
        {
            ans.push_back(carry%10);
            carry/=10;
        }
    }

    return ans;
}

/*
void printNum(vector<int> num)
{
    for (int i = num.size()-1; i >= 0; i--)
        cout << num[i];
    cout << endl;
}
*/

int numSum(vector<int> num)
{
    int sum = 0;
    for (int i = num.size()-1; i >= 0; i--)
        sum+=num[i];
    return sum;
}
