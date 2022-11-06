#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int x = 12;

  /* cek apakah bilangan tersebut kelipatan 6 */ 
  if (x % 6 == 0) {
    cout << "Bilangan " << x << " adalah kelipatan 6" << endl;
  } else {
    cout << "Bilangan " << x << " bukan kelipatan 6" << endl;
  }

  return 0;
}
