/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: LP2_120140141_Temp
Tanggal		: 11 November 2020
Deskripsi	: TUGAS 3
============================================
*/

#include <iostream>
using namespace std;

main(){
	float C,F,R,K;
	char convert;
	
	cin >> C;
	
	F=((9.0/5.0)*C)+32;
	R=(4.0/5.0)*C;
	K=C+273;
	
	cin >> convert;
	switch(convert){
		case 'F':
			cout<< F;
			break;
		case 'R':
			cout<< R;
			break;
		case 'K':
			cout<< K;
			break;
		default:
			cout<<"Tidak bisa Konversi";
			
	}
	

	return 0;
}
