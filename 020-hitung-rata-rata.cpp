#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int n,x,i,sum;
  float rata;

  cin >> n;
  sum = 0;
  i = 1;

  while (i<=n) {
    cin >> x;
    sum += x;
    i += 1;
  }

  rata = (float)sum/n;

  cout << "Rata-rata = " << rata << endl;

  return 0;
}
