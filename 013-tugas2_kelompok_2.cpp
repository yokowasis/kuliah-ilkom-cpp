#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int totalbelanja = 180000;
  float diskon = 20.0/100.0;
                         
  /* jika totalbelanja lebih dari 150000 maka mendapatkan diskon 20% */
  if (totalbelanja > 150000) {
    cout << "Total belanja: " << totalbelanja << endl;
    cout << "Diskon: " << totalbelanja * diskon << endl;
    cout << "Total yang harus dibayar: " << totalbelanja - (totalbelanja * diskon) << endl;
  } else {
    cout << "Total belanja: " << totalbelanja << endl;
    cout << "Diskon: 0" << endl;
    cout << "Total yang harus dibayar: " << totalbelanja << endl;
  }

  return 0;
}
