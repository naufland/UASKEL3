#include <iostream>
#include <string>
using namespace std;

struct Transaksi {
    string deskripsi;
    float jumlah;
    string tanggal;
};

int main() {
    Transaksi pendapatan[100];
    Transaksi pengeluaran[100];
    int jumlahPendapatan = 0, jumlahPengeluaran = 0;
    int pilihan;

    do {
        cout << "\n=== Kalkulator Keuangan ===" << endl;
        cout << "1. Tambah Pendapatan" << endl;
        cout << "2. Tambah Pengeluaran" << endl;
        cout << "3. Tampilkan Pendapatan" << endl;
        cout << "4. Tampilkan Pengeluaran" << endl;
        cout << "5. Hitung Untung atau Rugi" << endl;
        cout << "6. Keluar" << endl;
        cout << "Masukkan pilihan Anda: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
              
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            case 4:
                
                break;
            case 5:
                
                break;
            case 6:
                cout << "Keluar..." << endl;
                break;
            default:
                cout << "Pilihan tidak valid, silakan coba lagi." << endl;
        }
    } while (pilihan != 6);

    return 0;
}