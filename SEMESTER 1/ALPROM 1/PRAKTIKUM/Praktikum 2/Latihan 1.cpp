/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: LP2_120140141
Tanggal		: 11 November 2020
Deskripsi	: TUGAS 3
============================================
*/

#include <iostream>
using namespace std;

main(){
	int umur;
	string nama;
	char nama1[50];


	cout << "Masukkan Umur Anda = "; cin >> umur;
	cin.ignore();
	cout << "Masukkan Nama Anda = ";getline(cin,nama);
	cout << "Masukkan Nama = "; cin.getline(nama1,50);
	
	cout << "Halo " << nama <<"!" << endl;
	cout << "Nama Lengkap Anda " << nama1 << endl;
	cout << "Umur Anda " << umur << " Tahun" <<  endl;
}
