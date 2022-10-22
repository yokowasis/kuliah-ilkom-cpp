#include <iostream>
#include <iomanip>
using namespace std;

double f(double x) {

  double a,b,c;

  //2x^ + 3x - 4 = 0

  a = 2;
  b = 3;
  c = -4;

  return (a*x*x + b*x + c);
}

int main() {
  double a,b,c,toleransi, selisih;

  //bisection method
  
  a = -3; //batas bawah
  b = -2; //batas atah
  c = (a+b)/2;
  toleransi = 0.0001;
  selisih = 1;

  int i = 1;

  cout << fixed;
  cout << setprecision(8);

  while (selisih > toleransi) {
    i++;
    if (f(a)*f(c) < 0) {
      b = c;
      c = (a+b)/2;
      selisih = abs(c-b);
    } else {
      a = c;
      c = (a+b)/2;
      selisih = abs(c-a);
    }
    /* cout << "Selisih : " << selisih << endl; */
  }

  cout <<  "Iterasi : " << i << endl; 
  cout << "F(" << c << ") = " << f(c) << endl;

  return 0;
}
