#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    cout << left
         << setw(10) << "Nilai"
         << setw(10) << "Huruf"
         << setw(15) << "Keterangan"
         << "\n";

    for (int nilai = 100; nilai >= 0; nilai -= 5) {
        string huruf;
        string keterangan;

        if (nilai >= 80) {
            huruf = "A";
        } else if (nilai >= 75) {
            huruf = "B+";
        } else if (nilai >= 70) {
            huruf = "B";
        } else if (nilai >= 65) {
            huruf = "C+";
        } else if (nilai >= 60) {
            huruf = "C";
        } else if (nilai >= 40) {
            huruf = "D";
        } else {
            huruf = "E";
        }

        if (nilai >= 60) {
            keterangan = "Lulus";
        } else {
            keterangan = "Belum lulus";
        }

        cout << setw(10) << nilai
             << setw(10) << huruf
             << setw(15) << keterangan
             << "\n";
    }

    return 0;
}