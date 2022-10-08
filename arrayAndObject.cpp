#include <iostream>
using namespace std;

class Student {
    public:
        string studentName;
        string nim;
        string alamat;

    // constuctor
    Student() {}
    Student(string studentName, string nim, string alamat) : 
        studentName(studentName), nim(nim),alamat(alamat) {}
};

int main() {

    Student students[2] = {
        Student("Wasis Haryo Sasoko","B0220068","Rabangodu Utara"),
        Student("Ade Kurnia","B0220050","Wawo")
    };
    
    for (int i=0;i<2;i++) {
        cout << students[i].studentName << endl;
    }
    
    return 0;
}
