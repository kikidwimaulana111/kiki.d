#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaBarang = "Laptop";
    long long harga = 7500000;
    int jumlah = 2;
    string stok = "Tersedia";

    cout << "===== DATA BARANG =====" << endl;

    // for loop — lebih ringkas dari while
    for (int i = 1; i <= jumlah; i++) {
        cout << "Barang ke-" << i << endl;
        cout << "  Nama : " << namaBarang << endl;
        cout << "  Harga: Rp" << harga << endl;
        cout << "  Stok : " << stok << endl;
    }

    cout << "========================" << endl;
    cout << "Total barang: " << jumlah << " unit" << endl;

    return 0;
}
