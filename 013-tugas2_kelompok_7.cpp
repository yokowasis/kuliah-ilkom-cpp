#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int totalBelanja = 19212;

  while (totalBelanja % 25 > 0) {
    totalBelanja--;
  }

  cout << "Total belanja: " << totalBelanja << endl;

  return 0;
}
