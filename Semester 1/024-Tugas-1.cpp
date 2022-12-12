#include <iostream>
#include <iomanip>
using namespace std;

class MataKuliah {
  public :
    string kode;
    string nama;
    int nilai;
};

class Mahasiswa {
  public:
    string NIM;
    string NamaMahasiswa;
    MataKuliah matakuliah;
};

int main() {
  Mahasiswa yokowasis;
  yokowasis.NIM = "B0220068";
  yokowasis.NamaMahasiswa = "Wasis Haryo Sasoko";
  yokowasis.matakuliah.kode = "ALGO";
  yokowasis.matakuliah.nama = "Algoritma dan Pemrograman";
  yokowasis.matakuliah.nilai = 90;
  return 0;
}
