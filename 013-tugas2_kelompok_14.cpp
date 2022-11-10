#include <iostream>
#include <iomanip>
using namespace std;

int main() {

  float score;

  cout << "Masukkan Nilai : ";
  cin >> score;

  //grading with if statement

  if (score >= 80) {
    cout << "A";
  } else if (score >= 70) {
    cout << "B";
  } else if (score >= 55) {
    cout << "C";
  } else if (score >= 40) {
    cout << "D";
  } else { 
    cout << "E";
  };

  return 0;
}
