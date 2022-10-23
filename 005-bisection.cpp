#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

double f(double x) {

  double a,b,c;

  //2x^ + 3x - 4 = 0

  a = 2;
  b = 3;
  c = -4;

  return (a*x*x + b*x + c);
}

int echo(double a, double b, double c, int i) {
  cout 
    << i << " : " 
    << a << " : " 
    << b << " : " 
    << c << " : " 
    << f(a) << " : " 
    << f(b) << " : " 
    << f(c) << " : "
    << endl;

  return 0;
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
  echo (a,b,c,i);

  while (selisih > toleransi) {
    i++;
    if (f(a)*f(c) < 0) {
      b = c;
      c = (a+b)/2;
      selisih = fabs(c-b);
    } else {
      a = c;
      c = (a+b)/2;
      selisih = fabs(c-a);
    }
    echo (a,b,c,i);
    /* cout << "Selisih : " << selisih << endl; */
  }

  cout <<  endl << "Iterasi : " << i << endl; 
  cout << "F(" << c << ") = " << f(c) << endl;

  return 0;
}
