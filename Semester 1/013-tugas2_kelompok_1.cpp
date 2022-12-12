#include <iostream>
#include <iomanip>
using namespace std;

/* Soal : */
/* Buatlah algoritma yang membaca sebuah bilangan bulat positif */
/* lalu menentukan apakah bilangan tersebut merupakan kelipatan 6. */

int main() {
  int x;
  cin >> x;

  if (x % 6 == 0) {
    cout << "Bilangan " << x << " adalah kelipatan 6" << endl;
  } else {
    cout << "Bilangan " << x << " bukan kelipatan 6" << endl;
  }

  return 0;
}
