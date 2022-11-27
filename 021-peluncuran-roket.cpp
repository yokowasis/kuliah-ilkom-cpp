#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  //countdown with while
  
  int i;
  i = 100;

  while (i>=0) {
    cout << i << " ";
    i -= 1;
  }

  cout << endl;
  cout << "Go !" << endl;

  return 0;
}
