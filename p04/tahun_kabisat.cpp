#include <iostream>
#include <string> 

using namespace std;

int main() {
    int tahun = 0;
    cout << "Masukkan tahun: ";
    cin >> tahun;

    if ((tahun % 4 == 0 && tahun % 100 !=0) || tahun % 400 == 0) {
        cout << tahun << " adalah tahun kabisat.";
    } else {
        cout << tahun << " bukan tahun kabisat.";
    }
    return 0;
}