#include <iostream>

using namespace std;

struct Mahasiswa {
	string nim;
	string nama;
	string alamat;
	string umur;
}; 

int main()
{
	Mahasiswa mhs1, mhs2;

	mhs1.nim = "20220140204";
	mhs1.nama = "Afnan";
	mhs1.alamat = "camplong";
	mhs1.umur = 19;
} 

cout << "Masukkan nim: ";
cin >>  mhs