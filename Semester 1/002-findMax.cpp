#include <iostream>
using namespace std;

int main() {

    int bilangan[3];
    int i;
    int max=0;

    cout << "Masukkan 3 Bilangan : " << endl;

    for (i=0;i<=2;i++) {
        cin >> bilangan[i];
    }

    for (i=0;i<=2;i++) {
        if (bilangan[i]>max) {
            max = bilangan[i];
        }
    }

    cout << endl << "\nBilangan terbesar adalah : " << max << endl;
    
    return 0;
}
