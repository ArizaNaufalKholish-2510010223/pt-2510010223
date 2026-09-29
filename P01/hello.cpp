#include <iostream>

int main()
{
    std::cout << "Halo dari C++\n";
    return 0;
}

//jika include <iostream> dihapus maka hasilnya menjadi hello.cpp:5:10: error: 'cout' is not a member of 'std', yang membuat error ini muncul karena kita belum menambahkan header <iostream> yang berisi deklarasi std::cout. 
// yang dimana membuat output dan inputnya ga bisa muncul karena iostream adalah library yang digunakan untuk input dan output di C++.