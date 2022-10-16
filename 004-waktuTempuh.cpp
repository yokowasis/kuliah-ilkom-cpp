#include <iostream>
using namespace std;

class Jam {
  public:
    int hh, mm, ss;
};

int main() {

  Jam jam;
  
  jam.hh = 1;
  jam.mm = 0;
  jam.ss = 0;

  cout 
    << "Waktu Tempuh dalam detik : "
    << jam.hh * 3600 + 
       jam.mm * 60 + 
      jam.ss  
    << endl;

  return 0;
}
