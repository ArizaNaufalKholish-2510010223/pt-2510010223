# P04 Percabangan: if, if-else, switch, dan Operator Logika

Folder kode Pertemuan 4 Pemrograman Terstruktur. Setiap program di sini punya flowchart pasangannya
di modul (Gambar 2 sampai 7); baca gambarnya dulu, baru kodenya.

## Isi

| Berkas | Kegunaan |
|---|---|
| `if_dasar.cpp` | if satu cabang: peringatan bila nilai di bawah 60 |
| `if_else.cpp` | if-else: lulus atau belum lulus |
| `bertingkat.cpp` | if-else bertingkat tiga syarat; coba tukar urutannya |
| `logika.cpp` | `&&`, `||`, `!` dengan bool bernama; syarat ikut UAS |
| `switch_menu.cpp` | switch dengan break dan default; coba hapus break-nya |
| `sinilai_v03_awal.cpp` | Starter SiNilai v0.3: bagian v0.2 sudah jadi, lengkapi huruf mutu, status, keterangan |
| `contoh_masukan.txt` | Masukan uji yang sama dengan pertemuan sebelumnya |
| `.vscode/`, `.gitignore` | Sama dengan pertemuan sebelumnya |

## Kasus uji SiNilai v0.3

| Empat komponen | Nilai akhir | Huruf | Keterangan | Status |
|---|---|---|---|---|
| contoh_masukan.txt | 83.975 | A | Sangat baik | Lulus |
| 80 x4 | 80 | A | Sangat baik | Lulus |
| 79.9 x4 | 79.9 | B+ | Baik | Lulus |
| 60 x4 | 60 | C | Cukup | Lulus |
| 59.9 x4 | 59.9 | D | Kurang | Belum lulus |
| 30 x4 | 30 | E | Sangat kurang | Belum lulus |

## Yang dikumpulkan mahasiswa

Folder `p04` di repository `pt-NPM` berisi `sinilai_v03.cpp` dan  `README.md`. Lihat Modul Pertemuan 4 bagian E.


Praktikum 1: if Satu Cabang

1. Baca dulu Gambar 2 dengan jari, lalu bangun if_dasar.cpp. Jalankan tiga kali: 55, 60, dan 59.9.
Nilai akhir: 55
Belum lulus
Peringatan: nilai di bawah 60, segera konsultasi.
Terima kasih.


Nilai akhir: 60
Terima kasih.

Nilai akhir: 59.9
Belum lulus
Peringatan: nilai di bawah 60, segera konsultasi.
Terima kasih.



bedanya jika nilai 60 maka hasilnya, Peringatan: nilai di bawah 60, segera konsultasi. karena hasilnya menjadi true dan menampilkan teks yang ada, dan jika hasilnya tidak maka akan menampilkan terima kasih. jadi karena hasilnya harus kurang dari 60 untuk menampilakn hasil true yang ada, maka harus menggunakan ">"

3.Hapus kurung kurawal { } pada if, bangun, jalankan dengan 75. Baris Terima kasih tetap tampil,
tetapi coba tambahkan satu cout lagi di dalam bekas blok itu dan lihat kejutannya. Kembalikan
kurungnya.

$ g++ -std=c++20 -Wall -Wextra -Wpedantic -g "if_dasar.cpp" -o "if_dasar.exe" && "./if_dasar.exe"
Nilai akhir: 57
Belum lulus
Peringatan: nilai di bawah 60, segera konsultasi.
Terima kasih.

Praktikum 2: if-else
1. Bangun if_else.cpp, uji dengan 60 dan 59.9. Cocokkan dengan Gambar 3: jalan mana yang
ditempuh masing-masing?

Nilai akhir: 60
Lulus

Nilai akhir: 59.9
Belum 

2.Sengaja tulis if (nilai_akhir = 60) dengan satu tanda sama dengan. Bangun, baca warningnya, jalankan dengan 30, dan amati hasilnya yang selalu Lulus. Kembalikan ke == atau >=.

if_else.cpp: In function 'int main()':
if_else.cpp:11:21: warning: suggest parentheses around assignment used as truth value [-Wparentheses]
   11 |     if (nilai_akhir = 60) 
Nilai akhir: 30
Lulus

Praktikum 3: Urutan Syarat pada if-else Bertingkat
1. Bangun bertingkat.cpp. Uji dengan 80, 79.9, 70, 69.9, 60, 59.9. Ikuti setiap angka di Gambar 4.

Nilai akhir: 80
Huruf mutu: A

Nilai akhir: 79.9
Huruf mutu: B

Nilai akhir: 70
Huruf mutu: B

Nilai akhir: 69.9
Huruf mutu: C

Nilai akhir: 60
Huruf mutu: C

Nilai akhir: 59.9
Huruf mutu: D





2. Pindahkan blok nilai >= 60 ke paling atas. Bangun, uji dengan 95. Hasilnya C, bukan A. Jelaskan
dengan gambar kenapa begitu, lalu kembalikan urutannya

setelah dia membaca nilai, nilai if yang akan dibaca duluan, dan karena logika nya nilai yang lebih dari atau sama dengan 60, yang dimana hasilnya tetap benar 90, yang dimana 90 >= 60 tetapi kita disini mau hasilnya dari nilai tertinggi seperti 90 hasilnya, oleh karena itu logika if,elif,else digunakan dari tertinggi sampai terendah, biar urutannya akan  terbaca dari yang tertinggi dulu jika rendah maka dia baca logika elif yang lain, yang lebih rendah.

3. Tambahkan satu tingkat baru: B+ untuk 75 sampai 79,9. Di mana blok itu harus disisipkan supaya
tetap benar?
    if (nilai >= 80) {
        cout << "Huruf mutu: A\n";
    } else if (nilai > 75) {
        cout << "Huruf mutu: B+\n";
    } else if (nilai >= 70) {
        cout << "Huruf mutu: B\n";
    } else if (nilai >= 60) {
        cout << "Huruf mutu: C\n";
    } else {
        cout << "Huruf mutu: D\n";
    }
    return 0;

Praktikum 4: Empat Kombinasi Operator Logika
1. Bangun logika.cpp. Ada dua masukan, masing-masing bisa cukup atau tidak, jadi ada empat
kombinasi: (80, 1), (80, 0), (65, 1), (65, 0). Jalankan keempatnya, catat pesan yang muncul, dan
tandai jalannya di Gambar 5.

Presensi (0-100)          : 80
Tugas dikumpulkan? (1/0)  : 1
Boleh mengikuti UAS.

Presensi (0-100)          : 80
Tugas dikumpulkan? (1/0)  : 0
Tidak boleh: tugas belum dikumpulkan.

Presensi (0-100)          : 65
Tugas dikumpulkan? (1/0)  : 1
Tidak boleh: presensi kurang dari 70.

Presensi (0-100)          : 65
Tugas dikumpulkan? (1/0)  : 0
Tidak boleh: presensi kurang dan tugas belum lengkap.

2.Ganti && pada syarat pertama menjadi ||. Jalankan (65, 1). Sekarang "boleh UAS" padahal
presensinya kurang. Kembalikan ke &&.

Presensi (0-100)          : 65
Tugas dikumpulkan? (1/0)  : 1
Boleh mengikuti UAS.

3. Tambahkan di akhir program: cetak Genap bila tugas_dikumpulkan genap, memakai % dari
Pertemuan 3 dan ==.

    if (presensi_cukup && tugas_lengkap) {
        cout << "Boleh mengikuti UAS.\n";
    } else if (!presensi_cukup && !tugas_lengkap) {
        cout << "Tidak boleh: presensi kurang dan tugas belum lengkap.\n";
    } else if (!presensi_cukup) {
        cout << "Tidak boleh: presensi kurang dari 70.\n";
    } else {
        cout << "Tidak boleh: tugas belum dikumpulkan.\n";
    }
    if (tugas_dikumpulkan % 2 == 0) {
        cout << "Tugas dikumpulkan genap.\n";
    }

Presensi (0-100)          : 4 
Tugas dikumpulkan? (1/0)  : 2
Tidak boleh: presensi kurang dan tugas belum lengkap.
Tugas dikumpulkan genap.

Praktikum 5: switch dan break yang Hilang
1. Hapus semua break;, bangun ulang, baca warning may fall through, lalu jalankan dengan 1.
Keempat pesan tampil. Kembalikan break-nya.

switch_menu.cpp: In function 'int main()':
switch_menu.cpp:18:21: warning: this statement may fall through [-Wimplicit-fallthrough=]
   18 |             cout << "Menampilkan kartu nilai...\n";
      |                     ^~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
switch_menu.cpp:20:9: note: here
   20 |         case 2:
      |         ^~~~
switch_menu.cpp:21:21: warning: this statement may fall through [-Wimplicit-fallthrough=]
   21 |             cout << "Menghitung ulang...\n";
      |                     ^~~~~~~~~~~~~~~~~~~~~~~
switch_menu.cpp:23:9: note: here
   23 |         case 3:
      |         ^~~~
switch_menu.cpp:24:21: warning: this statement may fall through [-Wimplicit-fallthrough=]
   24 |             cout << "Sampai jumpa.\n";
      |                     ^~~~~~~~~~~~~~~~~
switch_menu.cpp:26:9: note: here
   26 |         default:
      |         ^~~~~~~
=== Menu SiNilai ===
1. Tampilkan kartu nilai
2. Hitung ulang
3. Keluar
Pilihan: 1
Menampilkan kartu nilai...
Menghitung ulang...
Sampai jumpa.
Pilihan tidak dikenal.

2. Tambahkan kasus 4 "Tentang program". Pikirkan: apakah default masih perlu?
int main() {
    int pilihan = 0;
    cout << "=== Menu SiNilai ===\n";
    cout << "1. Tampilkan kartu nilai\n";
    cout << "2. Hitung ulang\n";
    cout << "3. Keluar\n";
    cout << "4. Tentang Program\n";
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
        case 4:
            cout << "Tentang Program\n";
            break;
        default:
            cout << "Pilihan tidak dikenal.\n";
    }
=== Menu SiNilai ===
1. Tampilkan kartu nilai
2. Hitung ulang
3. Keluar
4. Tentang Program
Pilihan: 4
Tentang Program

dari yang ada default masih perlu untuk pengeluaran terakhir jika tidak ada pilihan yang terpilih maka default yang akan terpilih





## Deklarasi AI

Tuliskan AI yang digunakan, prompt, dan umpan balik AI