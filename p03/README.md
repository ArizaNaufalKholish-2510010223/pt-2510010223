# P03 Ekspresi dan Operator: Menghitung Nilai Akhir

Folder kode Pertemuan 3 Pemrograman Terstruktur. Buka folder ini di Visual Studio Code
(File, Open Folder) supaya pengaturan di `.vscode` ikut terpakai.

## Isi

| Berkas | Kegunaan |
|---|---|
| `operator.cpp` | Lima operator aritmetika pada int dan double; pembagian bilangan bulat dan bedanya dengan Python |
| `prioritas.cpp` | Prioritas dan asosiativitas operator, operator gabungan `+=` dan `++`. Tebak dulu, baru jalankan |
| `campuran.cpp` | Ekspresi campuran int dan double: tiga cara menghitung rata-rata, hanya satu yang benar |
| `sinilai_v02_awal.cpp` | Starter SiNilai v0.2: bagian input dari v0.1 sudah jadi, lengkapi perhitungan nilai akhir |
| `contoh_masukan.txt` | Masukan uji yang sama dengan Pertemuan 2: `./sinilai_v02 < contoh_masukan.txt` |
| `.vscode/`, `.gitignore` | Sama dengan pertemuan sebelumnya |
| `_kunci/` | Kunci SiNilai v0.2, hanya untuk dosen |

## Keluaran SiNilai v0.2 yang diharapkan (bagian akhir)

```
--- Kartu Nilai Mahasiswa ---
Nama        : Siti Aminah
NPM         : 2024010101
Nilai akhir : 83.975
Rerata polos: 85.875
```

Nilai akhir = 100 x 0,10 + 85,5 x 0,45 + 78 x 0,25 + 80 x 0,20 = 10 + 38,475 + 19,5 + 16 = 83,975.

## Latihan Mandiri
3.Kapan keduanya sama
persis? saat nilai yang bobot dan tidak bobot sama, disaat itu hasilnya akan sama

4.Ambil tiga ekspresi dari prioritas.cpp, terjemahkan ke Python, jalankan, dan catat mana yang hasilnya
berbeda dari C++ beserta alasannya.

cpp:
2 * 3 / 4     = 1
2 / 4 * 3     = 0
python
2 * 3 / 4 = 1.5
2 / 4 * 3 = 1.5

di cpp karena dia menggunakan integer jadi bilangan bulat, ga jadi bilangan decimal gini urutannya:
2 * 3 / 4     = 1
2 * 3 = 6
6 / 4 = 1.5 
karena harus jadi bilangan bulat dia langsung menjadi = 1

2 / 4 * 3     = 0

2 / 4 = 0.5 = 0 karena harus bilangan bulat
0 * 3 = 0
disini karena dia C++ urutannya dari kiri, beda seperti python yang hanya langsung mengikuti matematika seperti biasa



## Yang dikumpulkan mahasiswa

Folder `p03` di repository `pt-NPM` berisi `sinilai_v02.cpp` dan  `README.md`. Lihat Modul Pertemuan 3 bagian E.

## Deklarasi AI

A1
Menggunakan AI Chat Gpt untuk konsultasi masalah soal apakah sudah benar atau belum dan menggunakan untuk push github
berikut promptnya:

# pengguna: cara menampilakn input saat outputnya munuclkaya 17 dibagi 5 adalah... di cpp

# umpan balik chat gpt:
Untuk menampilkan teks input bersamaan dengan hasil outputnya di C++, Anda bisa menggunakan perintah std::cout untuk mencetak teks pengantar, diikuti oleh proses perhitungan langsung di dalam baris kode tersebut.
Berikut adalah kode program C++ untuk menampilkan "17 dibagi 5 adalah..." beserta hasilnya:
cpp
#include <iostream>

int main() {
    // Menggunakan pembagian desimal (float/double) agar hasilnya akurat
    double hasil = 17.0 / 5.0;
    
    // Menampilkan input teks dan output hasilnya secara bersamaan
    std::cout << "17 dibagi 5 adalah " << hasil << std::endl;
    
    return 0;
}



 # pengguna: cara push kegithub yang dimana update dan tambahan file  disitu

# umpan balik chat gpt:
Dari screenshot kamu, terlihat bahwa:

VS Code: Folder p03 punya beberapa file baru seperti prioritas.py, Waktu.cpp, dan bilangan_bulat.cpp.

GitHub: Folder p03 baru berisi README.md dan sinilai_v02_awal.cpp.

Tujuan: Kamu ingin meng-upload file baru sekaligus memperbarui file lama di GitHub.

Kamu bisa melakukan semuanya langsung dari Terminal VS Code, tanpa perlu upload satu per satu.

1. Buka terminal VS Code
Di screenshot pertama, terminal kamu sudah terbuka. Pastikan posisinya di folder p03.

Ketik:

git status

Perintah ini akan menampilkan file yang baru, berubah, atau belum masuk Git.

2. Tambahkan file baru dan perubahan
Karena kamu ingin meng-upload semua perubahan dalam folder p03, ketik:

git add .

Perintah ini menambahkan semua file baru dan perubahan di folder saat ini beserta subfoldernya.

Catatan: Sebaiknya jangan upload file .exe, karena itu hasil kompilasi. Untuk tugas pemrograman biasanya cukup file .cpp, .py, dan .md.

Kalau ingin memilih file tertentu saja, gunakan:

git add prioritas.py Waktu.cpp bilangan_bulat.cpp README.md

3. Buat commit
Setelah itu ketik:

git commit -m "Update dan tambah file tugas P03"

Commit berfungsi untuk menyimpan catatan perubahan sebelum dikirim ke GitHub.

4. Push ke GitHub
Karena pada screenshot GitHub kamu menggunakan branch main, ketik:

git push origin main

Tunggu sampai proses selesai.

5. Cek hasil di GitHub
Buka repository kamu:

Buka folder p03 di GitHub
Refresh halaman. File baru dan perubahan yang sudah di-commit seharusnya muncul di folder p03.

Urutan perintah lengkap
Kalau kamu ingin langsung menjalankannya, gunakan perintah berikut satu per satu di terminal VS Code:

Terminal Git Bash

git status
git add .
git commit -m "Update dan tambah file tugas P03"
git push origin main

Pastikan kamu sudah memeriksa file yang akan di-upload sebelum menggunakan git add ..

Satu hal penting dari screenshot kamu: Terminal menunjukkan folder p03, tetapi belum pasti folder tersebut sudah terhubung dengan repository GitHub yang benar.

Jadi, coba ketik git status terlebih dahulu, lalu kirim screenshot hasil terminalnya ke sini. Nanti saya bantu pastikan langkah berikutnya supaya file baru masuk ke repository yang benar tanpa menghilangkan file lama.

Tuliskan AI yang digunakan, prompt, dan umpan balik AI
