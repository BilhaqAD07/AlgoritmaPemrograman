/*
LATIHAN 2 Operasi Perkalian 2 Bilangan Bulat
Nama	: Bilhaq Avi Dewantara
NIM		: 120140141
Prodi	: Teknik Informatika
*/

#include <iostream>

using namespace std;

// DEKLARASI Menghitung Perkalian 2 Bilangan
int main()
{
	float satu, dua, perkalian;
	
	//INPUT
	cout << "Perhitungan Perkalian 2 Bilangan" << endl;
	cout << "Input Angka ke-1	-> "; cin >> satu;
	cout << "Input Angka ke-2	-> "; cin >> dua;
	cout << "\n";
	cout << "\n";
	// PROSES MENGHITUNG
	cout << "Menghitung Perkalian	: " << endl;
	perkalian = satu * dua;
	
	cout << "Hasil Perkalian	= " << perkalian;
	
	return 0;
}


