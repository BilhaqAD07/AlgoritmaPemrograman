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

int main() {
	int N, n;
	cin >> N;
	if(N%2==0){
	}else{
		cin >> N;
	}

	int i=n, j=n;
	int a[i][j];
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			cin >> a[i][j];
		}
	}
	cout << a[i][j];
	return 0;
}
