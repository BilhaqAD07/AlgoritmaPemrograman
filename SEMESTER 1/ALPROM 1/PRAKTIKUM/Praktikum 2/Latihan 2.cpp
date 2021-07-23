/*
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: 
Tanggal		: 11 November 2020
Deskripsi	: TUGAS 3
*/

#include <iostream>
using namespace std;

main(){

// KAMUS
string x;
char y[10];

cout << "Masukkan x = "; cin >> x;
cin.ignore();
cout << "Masukkan y = "; cin.getline(y,10);

cout << "Nilai x	= "<< x <<endl;
cout << "Nilai y	= "<< y <<endl;

return 0;
}
