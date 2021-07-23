/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: P6_120140141_03
Tanggal		: 02 Desember 2020
Deskripsi	: Matriks
============================================
*/

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main()
{	system("cls");
	int x, y;
	
	cin >> x >> y;
	int matriks[x][y];
	
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cin >> matriks[i][j];
		}
	}
	cout << endl;
	for(int i = 0; i < x; i++){
		for(int j = 0; j < y; j++){
			cout << matriks[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	
	for(int i = x-1; i >= 0; i--){
		for(int j = y-1; j >= 0; j--){
			cout << matriks[i][y-j-1] << " ";
		}
		cout << endl;
	}
}
	
	
	
	
	


