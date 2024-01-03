#include <iostream>

using namespace std;

int main() {
  // Deklarasi variabel
  int kode_barang, jumlah_barang;
  double harga_satuan;
  double total_harga;

  // Input data barang
  cout << "Masukkan kode barang: ";
  cin >> kode_barang;

  cout << "Masukkan jumlah barang: ";
  cin >> jumlah_barang;

  cout << "Masukkan harga satuan: ";
  cin >> harga_satuan;
  
// Hitung total harga
  total_harga = jumlah_barang * harga_satuan;

  // Tampilkan hasil
  cout << "Kode barang: " << kode_barang << endl;
  cout << "Jumlah barang: " << jumlah_barang << endl;
  cout << "Harga satuan: " << harga_satuan << endl;
  cout << "Total harga: " << total_harga << endl;

  return 0;
}