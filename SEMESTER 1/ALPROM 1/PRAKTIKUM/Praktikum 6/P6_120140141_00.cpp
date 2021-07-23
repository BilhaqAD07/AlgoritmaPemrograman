/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: P6_120140141_
Tanggal		: 02 Desember 2020
Deskripsi	:
============================================
*/

#include <iostream>
using namespace std;

int main(){
	int matriks [10][10], transpose [10][10];
	int m, n, i, j;
	
		cin >> m;
		cin >> n;
	
  		for (i = 0; i < m; i++){
    		for (j = 0; j < n; j++){
     		 cin  >> matriks[i][j];
    }
  }
  		for (i = 0; i < m; i++){
    		for (j = 0; j < n; j++){
      			transpose[j][i] = matriks[i][j];
    }
  }
	  	for (i = 0; i < n; i++){
    		for (j = 0; j < m; j++){
     			 cout << transpose[i][j] << "\t";
    }
    cout << endl;
  }
  return 0;
}
