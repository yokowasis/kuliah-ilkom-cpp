#include <iostream>
#include <iomanip>
using namespace std;

int ulangi(char karakter, int jumlah) {
  for (int i=1;i<=jumlah;i++) {
    cout << karakter;
  }
  return 0;
}

int main() {
  string s="AGUS";
  ulangi(s[0], 10);
  ulangi(' ', 10);
  ulangi(s[1], 10);
  ulangi(' ', 10);
  ulangi(s[2], 10);
  cout << endl; // garis baru                              

  return 0;
}
