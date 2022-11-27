#include <iostream>
#include <iomanip>
using namespace std;

class Siswa {
  public:
    string nama;
    string predikat;
    int nilai;
};

int main() {
  int n;

  cout << "Masukkan Jumlah Mahasiswa : ";
  cin >> n;

  Siswa siswa[n];

  for (int i = 0; i < n; i++) {
    cout << "Masukkan Nama Mahasiswa ke-" << i + 1 << " : ";
    cin >> siswa[i].nama;

    cout << "Masukkan Nilai Mahasiswa ke-" << i + 1 << " : ";
    cin >> siswa[i].nilai;

    if (siswa[i].nilai >= 80) {
      siswa[i].predikat = "A";
    } else if (siswa[i].nilai >= 70) {
      siswa[i].predikat = "B";
    } else if (siswa[i].nilai >= 55) {
      siswa[i].predikat = "C";
    } else if (siswa[i].nilai >= 40) {
      siswa[i].predikat = "D";
    } else {
      siswa[i].predikat = "E";
    }

  }

  cout << "Nama\tNilai\tPredikat" << endl;
  for (int i = 0; i < n; i++) {
    cout << siswa[i].nama << "\t" << siswa[i].nilai << "\t" << siswa[i].predikat << endl;
  }

  return 0;
}
