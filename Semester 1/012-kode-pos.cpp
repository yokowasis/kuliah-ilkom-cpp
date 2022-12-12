#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  string kota = "Bandung";

  cout << "Daftar Kota :" << endl;
  cout << "1. Padang" << endl;
  cout << "2. Bandung" << endl;
  cout << "3. Solo" << endl;
  cout << "4. Denpasar" << endl;
  cout << "5. Palu" << endl;
  cout << "Pilih Kota [1 s/d 5]" << endl;
  cout << "" << endl;

  int pilihan = 3;

  switch (pilihan) {
    case 1:
      cout << "25000" << endl;
      break;
    case 2:
      cout << "40100" << endl;
      break;
    case 3:
      cout << "51000" << endl;
      break;
    case 4:
      cout << "72000" << endl;
      break;
    case 5:
      cout << "92300" << endl;
      break;
    default:
      cout << "Tidak ada di dalam daftar" << endl;
  }

  return 0;
}
