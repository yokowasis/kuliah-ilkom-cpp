#include <iostream>
#include <iomanip>
using namespace std;

double f(double x) {
  int a = 2;
  int b = 3;
  int c = -4;

  return a*x*x + b*x + c;
}

int iterasi(double a, double penambah, double toleransi) {
  cout << "---------------" << endl;
  do {
    a = a + penambah;
    cout << a << " : " << f(a) << endl;
  } while ((f(a) * f(a+penambah)) > 0);

  if (abs(f(a)) <= toleransi) {
    return 0;
  } else {
    iterasi(a, penambah/10, toleransi);
  }

  return 0;
}

int main () {

  double a,b,toleransi;
  int p = 1;

  a = -10; //batas bawah
  toleransi = 0.0001;

  cout << fixed;
  cout << setprecision(8);

  iterasi(a, 1, toleransi);
        
  return 0;
}
