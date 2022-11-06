#include <iostream>
#include <iomanip>
using namespace std;

/* Soal : */
/* Tulislah algoritma yang membaca sebuah karakter digit 
 * (‘0’..’9’) lalu  mengonversinya menjadi nilai integer (0..9). 
 * Misalnya, jika dibaca karakter ‘5’,  maka nilai konversinya ke integer adalah 5. 
 * Buatlah masing-masing algoritma  untuk dua keadaan berikut: 
 * (a) karakter digit yang dibaca diasumsikan sudah benar terletak dalam rentang ‘0’..’9’
 * (b) karakter yang dibaca mungkin bukan digit ‘0’..’9’. 
 * Jika karakter yang dibaca  bukan karakter digit, 
 * maka hasil konversinya diasumsikan bernilai -1. */

int main() {
  
  cout << "Masukkan sebuah karakter antara (0..9)" << endl;

  char karakter;

  cin >> karakter;

  if (karakter >= '0' && karakter <= '9') {
    cout << "Karakter yang dimasukkan adalah " << karakter << endl;
  } else {
    cout << "-1" << endl;
  }

  return 0;
}
