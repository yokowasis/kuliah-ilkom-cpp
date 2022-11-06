#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int pixel = 20;

  if (pixel > 255) {
    pixel = 255;
  } else if (pixel < 0) {
    pixel = 0;
  }

  cout << "Nilai pixel: " << pixel << endl;

  return 0;
}
