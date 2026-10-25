// do-while: badan dijalankan dulu paling sedikit sekali, syaratnya baru diperiksa di akhir.
// Cocok untuk menu: tampilkan dulu, kerjakan pilihannya, baru tanya apakah sudah mau berhenti.
// Bagian switch-nya sama dengan switch_menu.cpp Pertemuan 4.
#include <iostream>

using namespace std;

int main() {
    int pilihan = 0;
    int banyak_pilihan_tidak_dikenal = 0; // Variabel untuk menghitung pilihan yang tidak dikenal
    do {
        cout << "\n=== Menu SiNilai ===\n";
        cout << "1. Tampilkan kartu nilai\n";
        cout << "2. Hitung ulang\n";
        cout << "3. Keluar\n";
        cout << "Pilihan: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
                cout << "Menampilkan kartu nilai...\n";
                break;
            case 2:
                cout << "Menghitung ulang...\n";
                break;
            case 3:
                cout << "Sampai jumpa.\n";
                break;
            //Ubah do_while_menu.cpp supaya menghitung berapa kali pengguna memilih pilihan yang tidak dikenal,dan mencetaknya saat keluar.
            default:
                cout << "Pilihan tidak dikenal, coba lagi.\n";
                banyak_pilihan_tidak_dikenal++;
        }
    } while (pilihan != 3);
    cout << "Jumlah pilihan yang tidak dikenal: " << banyak_pilihan_tidak_dikenal;
    return 0;
}
