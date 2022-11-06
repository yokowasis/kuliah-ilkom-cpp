#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  float T = 30;
  
  if (T <=0) {
    cout << "Air berwujud padat" << endl;
  } else if (T > 0 && T < 100) {
    cout << "Air berwujud cair" << endl;
  } else {
    cout << "Air berwujud gas" << endl;
  }

  return 0;
}
