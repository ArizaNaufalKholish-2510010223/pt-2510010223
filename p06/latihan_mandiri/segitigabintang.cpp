#include <iostream>

using namespace std;


    int main() {
    int n = 0;

    cout << "Masukkan n: ";
    cin >> n;

    for (int baris = 1; baris <= n; baris++) {
        for (int kolom = 1; kolom <= baris; kolom++) {
            cout << "*";
        }
        cout << "\n";
    }

    for (int baris = n; baris >= 1; baris--) {
        for (int kolom = 1; kolom <= baris; kolom++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}