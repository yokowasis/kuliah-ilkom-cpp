#include <iostream>
#include <iomanip>
using namespace std;

double f(double x) {

  double a,b,c;

  a = 2;
  b = 3;
  c = -4;

  return (a*x*x + b*x + c);
}

int main() {
  double x1,x2,x3,toleransi;

  //bisection method
  
  x1 = -3;
  x2 = -2;
  x3 = (x1+x2)/2;
  toleransi = 0.00001;

  int i = 0;
  while (abs(f(x3)) >= toleransi) {
    i++;
    if (f(x1)*f(x3) < 0) {
      x2 = x3;
    } else {
      x1 = x3;
    }
    x3 = (x1+x2)/2;
  }

  cout << fixed;
  cout << setprecision(8);
  cout <<  "Iterasi : " << i << endl; 
  cout << "F(" << x3 << ") = " << f(x3) << endl;

  return 0;
}
