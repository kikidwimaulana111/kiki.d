#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaBarang = "Laptop";
    long long harga = 7500000;
    int jumlah = 2;
    bool stokAda = false;  // Boolean: true = ada, false = habis

    cout << "===== DATA BARANG =====" << endl;
    cout << "Nama Barang : " << namaBarang << endl;
    cout << "Harga       : Rp" << harga << endl;
    cout << "Jumlah      : " << jumlah << endl;

    if (stokAda) {
        cout << "Stok        : Tersedia ✅" << endl;
    } else {
        cout << "Stok        : Habis ❌" << endl;
    }

    return 0;
}
