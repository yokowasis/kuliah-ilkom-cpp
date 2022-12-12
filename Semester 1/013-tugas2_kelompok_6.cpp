#include <iostream>
#include <iomanip>
using namespace std;

/* Soal : */
/* Dalam bidang pengolahan citra (image processing), elemen  gambar terkecil disebut pixel (picture element). 
 * Nilai pixel untuk gambar */
/* 256 warna adalah dari 0 sampai 255. Operasi-operasi terhadap pixel  seringkali berada di luar rentang nilai ini. 
 * Jika ini kasusnya, maka nilai hasil  operasi harus dipotong (clipping) 
 * sehingga tetap berada di dalam interval  [0..25]. 
 * Jika nilai hasil operasi lebih besar dari 255, maka nilai tersebut  dipotong menjadi 255, 
 * dan bila negatif maka dipotong menjadi 0. Dibaca  sebuah nilai hasil operasi pengolahan citra, 
 * buatlah algoritma untuk  melakukan clipping tersebut. */

int main() {
  int pixel;

  cout << "Masukkan nilai pixel: ";
  cin >> pixel;

  if (pixel > 255) {
    pixel = 255;
  } else if (pixel < 0) {
    pixel = 0;
  }

  cout << "Nilai pixel: " << pixel << endl;

  return 0;
}
