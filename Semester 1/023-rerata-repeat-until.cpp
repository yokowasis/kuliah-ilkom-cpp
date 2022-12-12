#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int i,x,n;
  float sum,rerata;

  cin >> n;
  sum = 0;
  i = 0;

  do {
    cin >> x;
    sum += x;
    i += 1;
  } while (i<n);


  rerata = (float)sum/i;
  cout << "Rerata = " << rerata << endl;

  return 0;
}
