#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  /* array of integer */
  int arr[3];

  // input 3 buah bilangan
  arr[0] = 26;
  arr[1] = 16;
  arr[2] = 52;

  if (arr[0] < arr[1] && arr[0] < arr[2]) {
    cout << " " << arr[0];
    if (arr[1] < arr[2]) {
      cout << " " << arr[1] << " " << arr[2];
    } else {
      cout << " " << arr[2] << " " << arr[1];
    }
  }   

  if (arr[1] < arr[0] && arr[1] < arr[2]) {
    cout << " " << arr[1];
    if (arr[0] < arr[2]) {
      cout << " " << arr[0] << " " << arr[2];
    } else {
      cout << " " << arr[2] << " " << arr[0];
    }
  }

  if (arr[2] < arr[0] && arr[2] < arr[1]) {
    cout << " " << arr[2];
    if (arr[0] < arr[1]) {
      cout << " " << arr[0] << " " << arr[1];
    } else {
      cout << " " << arr[1] << " " << arr[0];
    }
  }

  return 0;
}
