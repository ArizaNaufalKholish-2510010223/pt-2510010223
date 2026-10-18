#include <iostream>
#include <string>

using namespace std;

int main() {
    int jumlah_detik = 5000;
    
    int jam = jumlah_detik / 3600;
    int sisa_detik = jumlah_detik % 3600;
    int menit = sisa_detik / 60;
    int detik = sisa_detik % 60;

    cout << "jam = " << jam << "\n";
    cout << "menit = " << menit << "\n";
    cout << "detik = " << detik << "\n";


    return 0;



    


}