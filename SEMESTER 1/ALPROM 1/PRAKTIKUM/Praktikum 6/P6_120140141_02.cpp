/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: P6_120140141_02
Tanggal		: 02 Desember 2020
Deskripsi	: Idol Auditions
============================================
*/

#include <iostream>

using namespace std;
float rata(float c, int p){
	return float  (c/(p*p));
}
int main() {
		
		int n,b,c,user;
		float a;
		cin >> n;
		int array[n][n];
		for (int i = 0 ; i<n; i++){
			for (int j = 0; j<n; j++){
				cin >> array[i][j];
				a += array[i][j];
			}
			
		}
		cin >> b;
		cin >> c;
		user = array[b][c];
		
		cout << endl;
		cout << "\nTalent :" << endl ;
		for (int i = 0 ; i<n; i++){
			for (int j = 0; j<n; j++){
				cout << array[i][j] << " ";
				
			}
			cout << endl ;
		}
		
		cout << endl<<endl;
		cout << "Rata-rata : " << rata(a,n);
		cout << "\nHasil : ";
		if (user > rata(a,n)){
			cout << "Lolos";
		}
		else {
			cout << "Tidak Lolos";
		}
		   return 0;
		   
  }
