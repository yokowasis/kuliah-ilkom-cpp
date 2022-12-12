#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  char x = 'p';
  /* tolowercase */
  if (x >= 'A' && x <= 'Z') {
    x = x + 32;
  }

  if (x == 'a' || x == 'i' || x == 'u' || x == 'e' || x == 'o') {
    cout << "Huruf " << x << " adalah huruf vokal" << endl;
  } else {
    cout << "Huruf " << x << " adalah huruf konsonan" << endl;
  }

  return 0;
}
