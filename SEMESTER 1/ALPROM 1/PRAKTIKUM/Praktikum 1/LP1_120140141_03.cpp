// NIM/Nama		: Bilhaq Avi Dewantara
// Nama file	: TP1_120140141_03.cpp
// Tanggal		: 06 November 2020
// Deskripsi	: Tugas 3

#include <iostream>
using namespace std;

int main(){
	float IP, pekerja;
	
	cout << "Input Nilai IP = "; cin >> IP;
	cout << "\nInput Pengalaman Kerja (dalam Tahun) = "; cin >> pekerja;
	
	if (IP >=3,52 && pekerja >= 2){
		cout << "\nSelamat, anda diterima sebagai cleaning service di perusahaan ini!";
	} else if (IP >= 3,6 && pekerja <= 1,5 ){
		cout << "P\nengalaman kerja anda kurang lama. Anda diwajibkan mengikuti seleksi wawancara";
	} else if (IP == 1,87 && pekerja == 12){
		cout << "\nMaaf, Anda tidak memenuhi syarat untuk menjadi cleaning service di perusahaan ini";
	} else 	
	
	return 0;
	
}
