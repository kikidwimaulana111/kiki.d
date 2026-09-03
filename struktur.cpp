// 1. Pustaka/Header — memanggil alat yang dibutuhkan
#include <iostream>     // untuk input-output (cout/cin)
#include <string>       // untuk tipe data teks/nama
using namespace std;    // biar nggak ketik std:: terus

// 2. Fungsi Utama — pintu masuk semua program
int main() {

    // 3. Deklarasi & Isi Data — simpan informasi barang
    string namaBarang = "Laptop";   // teks
    long long harga = 7500000;      // angka harga besar
    int jumlah = 2;                  // angka bulat
    string stok = "Tersedia";        // teks keterangan

    // 4. Tampilkan Hasil — cetak ke layar
    cout << "===== DATA BARANG =====" << endl;
    cout << "Nama Barang : " << namaBarang << endl;
    cout << "Harga       : Rp" << harga << endl;
    cout << "Jumlah      : " << jumlah << endl;
    cout << "Stok        : " << stok << endl;

    // 5. Penutup — program selesai
    return 0;
}
