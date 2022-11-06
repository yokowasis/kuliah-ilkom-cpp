#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
  cout << "Masukkan sebuah karakter antara (0..9)" << endl;

  char karakter;

  karakter = '5';

  //jika karakter ada di antara 0 dan 9 maka output karakter tersebut, jika di luar range output -1

  if (karakter >= '0' && karakter <= '9') {
    cout << "Karakter yang dimasukkan adalah " << karakter << endl;
  } else {
    cout << "-1" << endl;
  }

  return 0;
}
