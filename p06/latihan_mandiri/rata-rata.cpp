#include <iostream>

using namespace std;

int main() {
    int n = 0;
    cout << "Jumlah nilai: ";
    cin >> n;

    double total = 0;
    int jumlah_sah = 0;
    int data_tidak_sah = 0;

    for (int i = 1; i <= n; i++) {
        double nilai = 0;
        cout << "Nilai ke-" << i << ": ";
        cin >> nilai;

        if (nilai < 0 || nilai > 100) {
            data_tidak_sah++;
            continue;
        }

        total += nilai;
        jumlah_sah++;
    }

    if (jumlah_sah > 0) {
        cout << "Rata-rata nilai sah: " << total / jumlah_sah << "\n";
    } else {
        cout << "Tidak ada nilai yang sah.\n";
    }

    cout << "Data tidak sah: " << data_tidak_sah << "\n";

    return 0;
}