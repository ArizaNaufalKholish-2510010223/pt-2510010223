#include <iostream>

using namespace std;

int main() {
    double tertinggi = -1;
    int banyak = 0;
    double nilai = 0;

    cout << "Masukkan nilai satu per satu, angka negatif untuk berhenti.\n";
    cout << "Nilai: ";
    cin >> nilai;

    while (nilai >= 0) {
        if (nilai > tertinggi) {
            tertinggi = nilai;
        }
        banyak++;

        cout << "Nilai: ";
        cin >> nilai;
    }

    if (banyak > 0) {
        cout << "Nilai tertinggi : " << tertinggi << "\n";
    } else {
        cout << "Tidak ada nilai yang dimasukkan.\n";
    }

    return 0;
}