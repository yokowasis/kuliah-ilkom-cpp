#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  cout << "Bilangan" << endl << endl;
  cout << "Ganjil : " << endl;
  for (int i = 1; i <= 35; i++) {
    if (i % 2 == 1) {
      cout << i << " ";
    }
  }
  cout << endl << endl;

  cout << "Genap : " << endl;
  int i = 1;
  while (i <= 35) {
    if (i % 2 == 0) {
      cout << i << " ";
    }
    i++;
  }

  cout << endl << "-----------------------------------------" << endl << endl;

  return 0;
}
