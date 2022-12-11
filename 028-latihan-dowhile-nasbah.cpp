#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int hutang = 10000000;
  float bunga = 0.015;
  float cicilan;

  int i = 1;
  do
  {
    cicilan = hutang * bunga;

    cout << "Bulan " << i << "\t:" << endl;
    cout << "Hutang "
         << "\t\t: " << hutang << endl;
    cout << "Cicilan"
         << "\t\t: " << cicilan << endl;
    cout << "-----------------------" << endl;

    hutang -= cicilan;
    i++;

  } while (hutang > 1000000);

  cicilan = hutang * bunga;
  cout << "Bulan " << i << "\t:" << endl;
  cout << "Hutang "
       << "\t\t: " << hutang << endl;
  cout << "Cicilan"
       << "\t\t: " << cicilan << endl;
  cout << "-----------------------" << endl;

  return 0;
}
