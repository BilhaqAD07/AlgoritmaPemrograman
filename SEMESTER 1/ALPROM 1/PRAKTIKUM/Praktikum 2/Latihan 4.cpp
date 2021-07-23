/*
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: 
Tanggal		: 11 November 2020
Deskripsi	: TUGAS 3
*/

#include <iostream>
using namespace std;

main(){
	float suhu;
	
	cout << "Masukkan nilai tmeperatur (Celcius) = "; cin >> suhu;
	
	if (suhu >= 100){
		cout << "Wujudnya ialah gas";
	} else if (suhu <= 0){
		cout << "Wujudnya ialah es";
	} else {
		cout << "Wujudnya ialah air";
	}
	return 0;
	
}
