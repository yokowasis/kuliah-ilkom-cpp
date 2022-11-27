#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int N,x,i,sum;
  double rerata;

  cout << "Masukkan banyaknya bilangan: ";
  cin >> N;
  sum = 0;

  cout << "Masukkan bilangan: ";
  for (i=1;i<=N;i++) {
    cin >> x;
    sum += x;
  }

  rerata = (double)sum/N;

  cout << "Rerata: " << rerata << endl;

  return 0;
}
