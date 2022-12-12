#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n;

  cout << "Masukkan Jumlah N : ";
  cin >> n;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }

  for (int i = n-1; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
