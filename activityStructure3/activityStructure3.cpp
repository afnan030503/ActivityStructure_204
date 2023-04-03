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
	Mahasiswa mhs[3];

	for (int i = 0;)