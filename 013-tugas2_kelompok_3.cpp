#include <iostream>
#include <iomanip>
using namespace std;


/* Soal */
/* Tulislah algoritma yang membaca tiga buah bilangan bulat, lalu  
 * mengurutkan tiga buah bilangan tersebut dari nilai yang terbesar ke nilai yang  terkecil. 
 * Keluaran adalah tiga buah bilangan yang terurut. */


int main() {

  int arr[3];

  cout << "Masukkan 3 buah bilangan, pisahkan dengan spasi" << endl;

  cin >> arr[0] >> arr[1] >> arr[2];

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
