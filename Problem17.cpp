#include <iostream>
using namespace std;

int letterCount(int num);

int main()
{
    int ans = 0;
    for (int i = 1; i <= 1000; i++)
        ans+=letterCount(i);
    cout << ans << endl;
}

int letterCount(int num)
{
    int count;
    switch(num)
    {
        case 1:
            count = 3; // one
            break;
        case 2:
            count = 3; // two
            break;
        case 3:
            count = 5; // three
            break;
        case 4:
            count = 4; // four
            break;
        case 5:
            count = 4; // five
            break;
        case 6:
            count = 3; // six
            break;
        case 7:
            count = 5; // seven
            break;
        case 8: 
            count = 5; // eight
            break;
        case 9:
            count = 4; // nine
            break;
        case 10:
            count = 3; // ten
            break;
        case 11:
            count = 6; // eleven
            break;
        case 12:
            count = 6; // twelve
            break;
        case 13: 
            count = 8; // thirteen
            break;
        case 14:
            count = 8; // fourteen
            break;
        case 15:
            count = 7; // fifteen
            break;
        case 16:
            count = 7; // sixteen
            break;
        case 17:
            count = 9; // seventeen
            break;
        case 18:
            count = 8; // eighteen
            break;
        case 19:
            count = 8; // nineteen
            break;
        case 20: 
            count = 6; // twenty
            break;
        case 30:
            count = 6; // thirty
            break;
        case 40:
            count = 5; // forty
            break;
        case 50:
            count = 5; // fifty
            break;
        case 60:
            count = 5; // sixty
            break;
        case 70:
            count = 7; // seventy
            break;
        case 80:
            count = 6; // eighty
            break;
        case 90:
            count = 6; // ninety
            break;

        default:
            if (num > 20 && num < 100) // ie. twentynine (29), fortysix (46)
            {
                count = letterCount(num%10) + letterCount(num-num%10);
                count = count;
                break;
            }
            else if (num%100 == 0 && num < 1000) // ie. onehundred (100), twohundred (200)
            {
                count = letterCount(num/100) + 7;
                count = count;
                break;
            }
            else if (num > 100 && num < 1000) // ie. threehundredandseventyfive (375)
            {
                count = letterCount(num%100) + letterCount(num-num%100) + 3;
                // num%100 will be a multiple recursive call to first default case
                // don't forget the "and"
                count = count;
                break;
            }
            else if (num == 1000) // ie. onethousand
            {
                count = 11;
                break;
            }
    }
    return count;
}
