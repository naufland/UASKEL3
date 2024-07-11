#include <iostream>
#include <string>
using namespace std;

struct Transaksi {
    string deskripsi;
    float jumlah;
    string tanggal;
};

void tambahPendapatan(Transaksi pendapatan[], int &jumlahPendapatan);
void tambahPengeluaran(Transaksi pengeluaran[], int &jumlahPengeluaran);
void tampilkanPendapatan(const Transaksi pendapatan[], int jumlahPendapatan);
void tampilkanPengeluaran(const Transaksi pengeluaran[], int jumlahPengeluaran);

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
                tambahPendapatan(pendapatan, jumlahPendapatan);
                break;
            case 2:
                tambahPengeluaran(pengeluaran, jumlahPengeluaran);
                break;
            case 3:
                tampilkanPendapatan(pendapatan, jumlahPendapatan);
                break;
            case 4:
                tampilkanPengeluaran(pengeluaran, jumlahPengeluaran);
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


void tambahPendapatan(Transaksi pendapatan[], int &jumlahPendapatan) {
    if (jumlahPendapatan >= 100) {
        cout << "Tidak dapat menambah pendapatan lagi. Batas maksimum tercapai." << endl;
        return;
    }
    cout << "Masukkan deskripsi pendapatan: ";
    cin.ignore();
    getline(cin, pendapatan[jumlahPendapatan].deskripsi);
    cout << "Masukkan jumlah pendapatan: ";
    cin >> pendapatan[jumlahPendapatan].jumlah;
    cout << "Masukkan tanggal pendapatan (DD-MM-YYYY): ";
    cin.ignore();
    getline(cin, pendapatan[jumlahPendapatan].tanggal);
    jumlahPendapatan++;
}

void tambahPengeluaran(Transaksi pengeluaran[], int &jumlahPengeluaran) {
    if (jumlahPengeluaran >= 100) {
        cout << "Tidak dapat menambah pengeluaran lagi. Batas maksimum tercapai." << endl;
        return;
    }
    cout << "Masukkan deskripsi pengeluaran: ";
    cin.ignore();
    getline(cin, pengeluaran[jumlahPengeluaran].deskripsi);
    cout << "Masukkan jumlah pengeluaran: ";
    cin >> pengeluaran[jumlahPengeluaran].jumlah;
    cout << "Masukkan tanggal pengeluaran (DD-MM-YYYY): ";
    cin.ignore();
    getline(cin, pengeluaran[jumlahPengeluaran].tanggal);
    jumlahPengeluaran++;
}

void tampilkanPendapatan(const Transaksi pendapatan[], int jumlahPendapatan) {
    cout << "\n=== Daftar Pendapatan ===" << endl;
    for (int i = 0; i < jumlahPendapatan; i++) {
        cout << i + 1 << ". " << pendapatan[i].deskripsi << ": Rp" << pendapatan[i].jumlah << " (Tanggal: " << pendapatan[i].tanggal << ")" << endl;
    }
}
void tampilkanPengeluaran(const Transaksi pengeluaran[], int jumlahPengeluaran) {
    cout << "\n=== Daftar Pengeluaran ===" << endl;
    for (int i = 0; i < jumlahPengeluaran; i++) {
        cout << i + 1 << ". " << pengeluaran[i].deskripsi << ": Rp" << pengeluaran[i].jumlah << " (Tanggal: " << pengeluaran[i].tanggal << ")" << endl;
    }
}
