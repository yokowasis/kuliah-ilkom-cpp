#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  
  //input 3 sisi segitiga a <= b <= c

  int a, b, c;
  a = 3;
  b = 4;
  c = 5;

  //output apakah segitiga siku siku

  if (a*a + b*b == c*c) {
    cout << "Segitiga siku siku" << endl;
  } else {
    cout << "Bukan segitiga siku siku" << endl;
  }

  return 0;
}
