#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  cout << "A." << endl;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 5; j++) {
      cout << j + 1 << "\t";
    }
    cout << endl;
  }
  cout << endl;

  cout << "B." << endl;
  for (int i = 0; i < 5; i++) {
    for (int j = 5; j > i; j--) {
      cout << i + 1 << "\t";
    }
    cout << endl;
  }
  cout << endl;

  cout << "C." << endl;
  for (int i = 0; i < 3;i++) {
    for (int j = 0; j < 5; j++) {
      cout << i + 1 << "\t";
    }
    cout << endl;
  }
  cout << endl;

  cout << "B." << endl;
  int k = 1;
  for (int i = 0; i < 5; i++) {
    for (int j = 5; j > i; j--) {
      cout << k << "\t";
      k++;
    }
    cout << endl;
  }
  cout << endl;

  cout << "-------------------" << endl;

  return 0;
}
