#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int N,i;

  cin >> N;
  cout << "Anak ayam turun " << N << endl;

  for (int i = N; i >= 2 ; i-=1) {
    cout << "Anak ayam turun " << i << " mati satu tinggal " << i-1 << endl;
  }

  cout << "Anak ayam turun 1 mati satu tinggal induknya" << endl;

  return 0;
}
