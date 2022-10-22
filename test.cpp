#include <iostream>
using namespace std;

int main() {
  int a,b;
  a = 10;
  b = 2*a - 5;
  a = b;
  a = a + 2;
  b = a + b;

  cout << a << endl;
  cout << b << endl;

  return 0;
}
