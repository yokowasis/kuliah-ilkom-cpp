#include <iostream>
#include <iomanip>
using namespace std;

double f(double x) {
  int a = 2;
  int b = 3;
  int c = -4;

  return a*x*x + b*x + c;
}

int iterasi(double a, double penambah) {
  for (int i = 1; i<=10 ; i++) {
    cout << i << " : " << a << " : " << f(a) << endl;
    if ((f(a) * f(a+penambah) <0)) {
      cout << i << "----------" << endl;
      iterasi(a, penambah/10);
    }
    a = a + penambah;
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

  iterasi(a, 1);
        
  return 0;
}
