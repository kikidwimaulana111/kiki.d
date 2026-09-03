#include <iostream>
#include <string>
using namespace std;

int main() {
    // Data barang
    string namaBarang = "Laptop";
    long long harga = 7500000;
    int jumlah = 2;
    string stok = "Tersedia";

    cout << "===== DATA BARANG =====" << endl;

    // while loop — tampilkan berkali-kali sebanyak jumlah barang
    int i = 1;
    while (i <= jumlah) {
        cout << "Barang ke-" << i << endl;
        cout << "  Nama : " << namaBarang << endl;
        cout << "  Harga: Rp" << harga << endl;
        cout << "  Stok : " << stok << endl;
        i++; // naikkan angka hitungan
    }

    cout << "========================" << endl;
    cout << "Total barang: " << jumlah << " unit" << endl;

    return 0;
}
