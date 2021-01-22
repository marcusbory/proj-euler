#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    double sum = 0, num;
    // copy the numbers into a text file, set it as same directory to cpp file
    ifstream numFile("Problem13.txt");

    if(numFile.is_open())
    {
        // checks if read is successful
        while (numFile >> num)
        {
            sum+=num;
        }
    }
    numFile.close();
    // since only 10 digits needed, don't have to care about precision issues of double
    cout.precision(12);
    cout << sum << endl;
    return 0;
}
