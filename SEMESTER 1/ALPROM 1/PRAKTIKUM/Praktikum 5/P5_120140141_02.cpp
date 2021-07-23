/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: P5_120140141_02
Tanggal		: 25 November 2020
Deskripsi	: Lucis
============================================
*/

#include <iostream>
using namespace std;

int hitung(int x, int y){

	return x * y;

}

int cek(int x, int y){
	bool hasil;
	if(x < y){
		hasil = true;
	} else{
		hasil = false;
	}
	return hasil;
}
int main(){
	int n[4], score[4], jum = 0, angka = 10, p, scoree1, scoree2;
	bool cekk;
	for(int i = 0; i < 4; i++){
		cin >> n[i];
	}
	
	for(int j = 0; j < 4; j++){
		jum += 1;
		p = n[j];
		score[j] = hitung(angka, p);
		cout << angka << " x " << n[j] << " = " << score[j] << endl;
		angka += 5;
		if(jum == 2){
			jum = 0;
			angka = 10;
			cout << "Total = " << score[j-1] * score[j] << endl;
		}
	}
	scoree1 = score[0] * score[1];
	scoree2 = score[2] * score[3];
	cekk = cek(scoree1, scoree2);
	if(cekk == true){
		cout << "Results : Menang";
	} else {
		cout << "Results : Kalah";
	}
	  
  return 0;
}
