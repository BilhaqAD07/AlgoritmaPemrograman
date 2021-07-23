/*
==============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara /
Deskripsi	: Fungsi Pangkat				 /
==============================================
*/

#include <iostream>
using namespace std;

int pangkat (int i, int j){
	int hasil =i;
	for (int a=2;a<=j;a++){
		hasil *=i;
	}
	return hasil;
}

int main(){
	int x,y;
	
	cout << "Masukkan Nilai x = "; cin >> x;
	cout << "Masukkan Nilai y = "; cin >> y;
	cout << x << "^2" << " + " << y << "^3" << endl; 
	cout << pangkat (x,2) + pangkat (y,3) << endl;


	
}
