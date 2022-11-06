#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  bool isMember = false;
  int jumlahCopy = 250;
  int hargaCopy = 80;
  int diskon = 0;

  int hargaNormal = jumlahCopy * hargaCopy;

  if (isMember) {
    if (jumlahCopy < 100) {
      hargaCopy = 75;
    } else {
      hargaCopy = 65;
    }
  } else {
    if (jumlahCopy > 200) {
      hargaCopy = 70;
    }
  }

  int totalHarga = jumlahCopy * hargaCopy;

  cout << hargaCopy << endl;

  cout << "Jumlah Copy: " << jumlahCopy << endl;
  cout << "Potongan Harga : " << hargaNormal - totalHarga << endl;
  cout << "Yang Harus Dibayar : " << totalHarga << endl;

  return 0;
}
