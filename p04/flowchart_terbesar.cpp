#include <iostream>

using namespace std;


int main() {
 double nilai1, nilai2, nilai3;
 cout << "Masukkan nilai pertama: ";
 cin >> nilai1;
 cout << "Masukkan nilai kedua: ";
 cin >> nilai2;
 cout << "Masukkan nilai ketiga: ";
 cin >> nilai3;



if (nilai1 > nilai2 && nilai1 > nilai3){
cout << "Nilai Tertinggi Adalah dari" << nilai1;
} else if (nilai2 > nilai1 && nilai2 > nilai3){
cout << "Nilai Tertinggi Adalah dari " << nilai2;
}else if (nilai3 > nilai1 && nilai3 > nilai2){
cout << "Nilai Tertinggi Adalah " << nilai3 ;
} else {
cout << "Masukkan input dengan benar";
}
return 0;
}
