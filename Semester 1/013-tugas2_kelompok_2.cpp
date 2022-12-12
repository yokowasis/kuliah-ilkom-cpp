#include <iostream>
#include <iomanip>
using namespace std;

/* Soal : */
/* Pasar Swalayan X memberikan diskon harga bagi pembeli yang  nilai total */ 
/* belanjanya lebih dari Rp150.000. Tulislah algoritma untuk  menentukan */ 
/* nilai belanja setelah dikurangi diskon. Data masukan adalah */  
/* nilai total belanja pembeli, sedangkan keluarannya adalah diskon harga */  
/* dan nilai belanja setelah dikurangi diskon. (Diskon diketahui 20%) */

int main() {
  int totalbelanja;
  float diskon = 20.0/100.0;

  cin >> totalbelanja;
                         
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
