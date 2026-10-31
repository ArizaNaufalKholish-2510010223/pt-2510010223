# P06 Perulangan Lanjutan: Bersarang, break, continue, Debugger, iomanip

Folder kode Pertemuan 6 Pemrograman Terstruktur. Setiap program berpasangan dengan flowchart di modul;
pada perulangan bersarang ada dua panah yang kembali, dan pada break/continue ada panah yang
"memotong jalan".

## Isi

| Berkas | Kegunaan |
|---|---|
| `bersarang_tabel.cpp` | for di dalam for: tabel perkalian dengan kolom lurus (setw) |
| `break_tebak.cpp` | break: berhenti lebih awal begitu tebakan benar, paling banyak 5 kesempatan |
| `continue_remediasi.cpp` | continue: lewati mahasiswa yang nilainya cukup, daftar hanya yang perlu remediasi |
| `rapi_iomanip.cpp` | fixed, setprecision, setw, left, right: keluaran berkolom rapi |
| `debug_rerata.cpp` | Program dengan kesalahan logika yang sengaja ditanam; dicari dengan debugger, bukan dibaca |
| `masukan_debug.txt` | Masukan untuk `debug_rerata`: 3 nilai (80, 70, 90), rata-rata yang benar 80 |
| `sinilai_v05_awal.cpp` | Starter SiNilai v0.5: v0.4 lengkap, lengkapi iomanip, penghitung huruf, tertinggi, sebaran batang |
| `contoh_masukan.txt` | Enam mahasiswa untuk menguji v0.5 |
| `.vscode/launch.json` | Konfigurasi debugger VS Code (gdb MSYS2); tekan F5 pada berkas .cpp yang terbuka |
| `.vscode/settings.json`, `tasks.json`, `.gitignore` | Sama dengan pertemuan sebelumnya |

## Kasus uji SiNilai v0.5 (`./sinilai_v05 < contoh_masukan.txt`)

| Mahasiswa | Komponen | Nilai akhir (2 desimal) | Huruf | Status |
|---|---|---|---|---|
| Siti Aminah | 100, 85.5, 78, 80 | 83.97 | A | Lulus |
| Budi Santoso | 80, 70, 65, 60 | 67.75 | C+ | Lulus |
| Rina Wati | 60, 50, 40, 55 | 49.50 | D | Belum lulus |
| Dewi Lestari | 90, 90, 90, 90 | 90.00 | A | Lulus |
| Eko Prasetyo | 75, 72, 70, 68 | 71.00 | B | Lulus |
| Fajar Nugroho | 30, 20, 35, 25 | 25.75 | E | Belum lulus |

Laporan kelas: 6 mahasiswa, 4 lulus, 2 belum lulus, rata-rata 64.66, tertinggi Dewi Lestari (90.00).
Sebaran huruf: A 2, B 1, C 1, D 1, E 1 (B+ dihitung sebagai B, C+ sebagai C).

Catatan: 83.975 tampil sebagai 83.97, bukan 83.98, karena di dalam komputer 83.975 tersimpan
sebagai 83.97499...; pembulatan mengikuti angka yang tersimpan.

## Debugger

`launch.json` memakai `C:/msys64/ucrt64/bin/gdb.exe` dan program `<nama>.exe` hasil tasks.json.
Di Linux hapus akhiran `.exe` dan ganti `miDebuggerPath` menjadi `/usr/bin/gdb`; di macOS ganti
`MIMode` menjadi `lldb` dan hapus `miDebuggerPath`. Panduan lengkap: `03_Modul/Panduan_Debugger_VS_Code.docx`.

## Yang dikumpulkan mahasiswa

Folder `p06` di repository `pt-NPM` berisi `sinilai_v05.cpp`. Lihat Modul Pertemuan 6 bagian E.

## Latihan Mandiri 5 — Penelusuran Nilai Tertinggi

Awalnya nilai_tertinggi = -1 dan nama_tertinggi kosong.

1. Siti Aminah: 83.97 > -1, nama tertinggi menjadi Siti Aminah.
2. Budi Santoso: 67.75 < 83.97, tidak berubah.
3. Rina Wati: 49.50 < 83.97, tidak berubah.
4. Dewi Lestari: 90.00 > 83.97, nama tertinggi menjadi Dewi Lestari.
5. Eko Prasetyo: 71.00 < 90.00, tidak berubah.
6. Fajar Nugroho: 25.75 < 90.00, tidak berubah.

nama_tertinggi berubah pada  ke-1 dan ke-4.
Hasil akhir: Dewi Lestari (90.00).


## Deklarasi AI
Saya menggunakan Ai 1 untuk pengerjaan tugas, yang dimana saya menggunakan chat gpt untuk konsultasi

## Prompt dan Umpan Balik
### Prompt:
ini maksudnya apa

### Umpan Balik
Bagian Debugger di README itu menjelaskan pengaturan agar F5 bisa menjalankan debug C++:
- launch.json: mengatur cara debugger dijalankan.
- C:/msys64/ucrt64/bin/gdb.exe: lokasi aplikasi debugger GDB di Windows.
- <nama>.exe: nama program hasil kompilasi, misalnya sinilai_v05_awal.exe.
- tasks.json: mengatur perintah kompilasi C++.
- Bagian Linux dan macOS: petunjuk untuk pengguna sistem tersebut.

### Prompt
apakah sudah benar sinilai saya?

### Umpan Balik





Tuliskan AI yang digunakan, prompt, dan umpan balik AI