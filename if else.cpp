#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaBarang = "Laptop";
    long long harga = 7500000;
    int jumlah = 2;
    bool stokAda = false;

    cout << "===== DATA BARANG =====" << endl;
    cout << "Nama Barang : " << namaBarang << endl;
    cout << "Harga       : Rp" << harga << endl;
    cout << "Jumlah      : " << jumlah << endl;

    // IF ELSE — kalau stok ada → tampilkan tersedia, kalau tidak → habis
    if (stokAda == true) {
        cout << "Stok        : Tersedia ✅" << endl;
    } else {
        cout << "Stok        : Habis ❌" << endl;
    }

    return 0;
}
