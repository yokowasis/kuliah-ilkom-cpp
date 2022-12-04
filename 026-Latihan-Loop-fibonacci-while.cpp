#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  cout << "Bilangan" << endl << endl;

  cout << "Fibonacci : ";
  int a = 0, b = 1, c = 0;
  while (c < 100) {
    cout << c << " ";
    a = b;
    b = c;
    c = a + b;
  }
  cout << endl << endl;

  return 0;
}
