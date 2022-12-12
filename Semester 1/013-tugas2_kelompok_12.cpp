#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  double L,r;

  cout << "Menghitung Luas Lingkaran \n";
  cout << "----------------------------- \n";
  cout << "Masukkan jari - hari : ";
  cin >> r;

  L = 22.0 / 7.0 * r * r;
  cout << "Luas Lingkaran : " << L << endl;

  return 0;
}
