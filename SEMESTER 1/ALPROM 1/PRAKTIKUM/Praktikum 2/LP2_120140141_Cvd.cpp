/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: LP2_120140141_Cvd
Tanggal		: 11 November 2020
Deskripsi	: Covid-19
============================================
*/

#include <iostream>
using namespace std;

main()
{
	int x;
	
	cin >> x;
	
	if (x==0){
		cout << "Zona Hijau" << endl;
	} else if (x<=10){
		cout << "Zona Kuning" << endl;
	} else if (x>10){
		cout << "Zona Merah" << endl;
	}
	return 0;
}
	
	

	
	
