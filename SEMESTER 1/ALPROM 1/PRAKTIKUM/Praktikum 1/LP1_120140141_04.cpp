// NIM/Nama		: Bilhaq Avi Dewantara
// Nama file	: TP1_120140141_04.cpp
// Tanggal		: 06 November 2020
// Deskripsi	: Tugas 4

#include <iostream>
using namespace std;

int main (){
	int input;
	
	cout <<"Bulan : \n";
	cout << "1. Januari \n";
	cout << "2. Februari \n";
	cout << "3. Maret \n";
	cout << "4. April \n";
	cout << "5. Mei \n";
	cout << "6. Juni \n";
	cout << "7. Juli \n";
	cout << "8. Agustus \n";
	cout << "9. September \n";
	cout << "10. Oktober \n";
	cout << "11. November \n";
	cout << "12. Desember \n";
	cout << "\nPilih Nomor Sesuai Dengan Bulan Yang Diinginkan : "; cin >> input;
	
	switch (input){
		case 1 : cout << "\nJanuari"; break;
		case 2 : cout << "\nFebruari"; break;
		case 3 : cout << "\nMaret"; break;
		case 4 : cout << "\nApril"; break;
		case 5 : cout << "\nMei"; break;
		case 6 : cout << "\nJuni"; break;
		case 7 : cout << "\nJuli"; break;
		case 8 : cout << "\nAgustus"; break;
		case 9 : cout << "\nSeptember"; break;
		case 10 : cout << "\nOktober"; break;
		case 11 : cout << "\nNovember"; break;
		case 12 : cout << "\nDesember"; break;
		default	: cout << "\nMohon Input Nomor Yang Benar";
	}

return 0;
}

