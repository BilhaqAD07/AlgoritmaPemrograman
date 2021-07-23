/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: P4_120140141_02
Tanggal		: 18 November 2020
Deskripsi	: FFXV
============================================
*/

#include <iostream>

using namespace std;

int main() {
	int i,m,n,z,bil;
	 	cin>>m;
	 	cin>>n;
	 bil=1;
	 z=1;
	 
	 for(i=1;i<=n;i++){
	 	bil=bil*m;
	 }
		cout<<bil<<endl;
	 for(i=1;i<=m;i++){
		z=z*bil;
	}
		cout<<z;
}


