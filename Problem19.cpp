#include <iostream>
using namespace std;

// find start date
// Days[7] = {0, 1, 2, 3, 4, 5, 6} 0 = Mon, 1 = Tue ... 6 = Sun (which we want)
bool isLeap(int year);
int sunCount();

int main()
{
    int ans = sunCount();
    cout << ans << endl;
}

bool isLeap(int year)
{
    return (year%4==0 && (year%400==0 || year%100!=0));
}

int sunCount()
{
    int nonLeapDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int leapDays[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    int daysSince = 0, count = 0, startDay = 1;
    for (int i = 1901; i < 2001; i++)
    {
        if (isLeap(i))
        {
            for (int j = 0; j < 12; j++)
            {
                daysSince+=leapDays[j];
                if ((daysSince + startDay)%7 == 6)
                    count++;
            }
        }
        else
        {
            for (int k = 0; k < 12; k++)
            {
                daysSince+=nonLeapDays[k];
                if ((daysSince + startDay)%7 == 6)
                    count++;
            }
        }
    }
    return count;
}
