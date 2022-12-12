#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  string nama;
  int JJK, lembur;
  float upah;

  nama = "Yokowasis";
  JJK = 40;

  if (JJK <= 48) {
    upah = JJK * 2000;
  } else {
    lembur = JJK - 48;
    upah = 48 * 2000 + lembur * 3000;
  }

  cout << upah;

  return 0;
}
