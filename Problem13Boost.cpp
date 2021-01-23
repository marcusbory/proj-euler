#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
#include <fstream>
using namespace std;

// Linux CLI to get boost header files
// Command: $ sudo apt-get install libboost-all-dev
// Installs header files to be readily included, reduces hassle :)

int main()
{
    boost::multiprecision::cpp_int sum = 0, i;
    ifstream numFile("Problem13Data.txt");

    if (numFile.is_open())
    {
        while (numFile >> i)
        {
            sum+=i;
        }
    }
    numFile.close();
    cout << sum << endl;
}
