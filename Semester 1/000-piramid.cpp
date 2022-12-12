// cpp pyramid
#include <iostream>
using namespace std;

int main()
{
    int i, j;

    cout << "input something : ";
    cin >> i;

    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << "+";
        }
        cout << endl;
    }

    cout << "Hello World";
    // mantap juga ternyata menggunakan ini
    // c++ menggunakan vs code menggunakan hp

    return 0;
}
