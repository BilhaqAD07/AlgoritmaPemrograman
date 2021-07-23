/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: P5_120140141_03
Tanggal		: 25 November 2020
Deskripsi	: Niflheim
============================================
*/

#include <iostream>
using namespace std;

int kekuatan(int a, int b){

	return a * b;

}
int main(){
	int n[3], ang = 10, z, kekuatan1, tot = 1;
	
	for(int i = 0; i < 3; i++){
		cin >> n[i];
	}
	
	for(int j = 0; j < 3; j++){
		z = n[j];
		kekuatan1 = kekuatan(ang, z);
		cout << ang << " X " << n[j] << " = " << kekuatan1 << endl; 
		ang += 5;
		tot *= kekuatan1;
	}
	cout << "Total = " << tot;
	  
  return 0;
}
