#include <iostream>
#include <iomanip>
using namespace std;

/* Soal : */
/* Tulislah algoritma yang membaca panjang (integer) tiga buah sisi  sebuah segitiga, 
 * a, b, dan c, yang dalam hal ini a ≤ b ≤ c, lalu menentukan  apakah ketiga 
 * sisi tersebut membentuk segitiga siku-siku, segitiga lancip, 
 * atau  segitiga tumpul (Petunjuk: gunakan hukum Phytagoras). */

int main() {
  
  int a, b, c;

  cout << "Masukkan panjang 3 sisi segitiga, pisahkan dengan spasi : " << endl;

  cin >> a >> b >> c;

  //output apakah segitiga siku siku

  if (a*a + b*b == c*c) {
    cout << "Segitiga siku siku" << endl;
  } else {
    cout << "Bukan segitiga siku siku" << endl;
  }

  return 0;
}
