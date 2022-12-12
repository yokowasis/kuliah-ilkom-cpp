#include <iostream>
#include <iomanip>
using namespace std;

/* Soal */
/* Jika kita berbelanja di pasar swalayan/supermarket, 
 * nilai total  belanja kita seringkali bukan kelipatan pecahan rupiah yang berlaku.  
 * Misalnya, nilai total belanja adalah Rp19.212,-. 
 * Andaikan saat ini pecahan  rupiah yang berlaku paling kecil Rp25,-. 
 * Selain itu, juga ada pecahan Rp50,-  dan Rp100,-. 
 * Umumnya kasir pasar swalayan membulatkan nilai belanja ke  pecahan yang terbesar. 
 * Jadi Rp19.212,- dibulatkan menjadi Rp19.225,-. Hal  ini jelas merugikan konsumen. 
 * Misalkan Anda memiliki pasar swalayan  yang jujur dan tidak merugikan pembeli, 
 * sehingga jika ada nilai belanja  yang bukan kelipatan pecahan yang ada, 
 * maka nilai belanja itu dibulatkan  ke pecahan terendah. Jadi, Rp19.212,- 
 * dibulatkan menjadi Rp19.200,-.  
 * Tulislah algoritma yang membaca nilai belanja (integer) 
 * lalu  membulatkannya ke nilai uang dengan pecahan terendah. */

int main() {
  int totalBelanja;

  cout << "Masukkan total belanja : " << endl;
  cin >> totalBelanja;

  while (totalBelanja % 25 > 0) {
    totalBelanja--;
  }

  cout << "Total belanja: " << totalBelanja << endl;

  return 0;
}
