// This is a basic program on C++
//
// Try to modify and run it and check out
// the output in the terminal below.
//
// Happy coding! :-)

#include <iostream>
using namespace std;

int main()
{
    int a, b, s = 1, fpb;
    double h1;

    a = 85;
    b = 15;

    while (s > 0)
    {
        if (a > b)
        {
            // a/b
            h1 = a / b;
            s = a % b;
            if (s == 0)
            {
                fpb = b;
            }
            else
            {
                a = s;
            }
        }
        else
        {
            // b/a
            h1 = b / a;
            s = b % a;
            if (s == 0)
            {
                fpb = a;
            }
            else
            {
                b = s;
            }
        };
    }

    cout << fpb << endl;

    return 0;
}
