#include <iostream>

using namespace std;

struct AlamatDetail
{
	string desa;
	string kota;
};
struct Mahasiswa
{
	string nim;
	string nama;
	AlamatDetail alamat;
	int umur;
};
int main() {
	Mahasiswa mhs;
	cout << "Masukkan nim: ";
	cin >> mhs.nim;
	cout << "Masukkan nama: ";
	cin >> mhs.nama;
	cout << "Alamat: " << endl;
	cout << "\tnamadesa: ";
	cin >> mhs.alamat.desa;
	cout << "\tnama kota: ";
	cin >> mhs.alamat.kota;
	cout << "Masukkan umur: ";
	cin >> mhs.umur;

	cout << "\nnim : " << mhs.nim;
	cout << "\nama : " << mhs.nama;
	cout << "\ndesa : " << mhs.alamat.desa;
	cout << "\nkota : " << mhs.alamat.kota;
}