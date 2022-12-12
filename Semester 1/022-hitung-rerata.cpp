#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int i,x;
  float sum,rerata;

  sum = 0;
  i = 0;
  cin >> x;

  while (x!=-1) {
    i += 1;
    sum += x;
    cin >> x;
  }

  if (i!=-1) {
    rerata = (float)sum/i;
    cout << "Rerata = " << rerata << endl;
  } else {
    cout << "Tidak ada nilai ujian yang dimasukkan" << endl;
  }

  return 0;
}
