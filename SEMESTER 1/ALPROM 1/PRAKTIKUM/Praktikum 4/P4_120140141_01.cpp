/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: P4_120140141_01
Tanggal		: 18 November 2020
Deskripsi	: Kekuatan Eidolongs
============================================
*/

#include <iostream>


using namespace std;
int main() {
		int n,m;
		
		cin >> n;
		cin >> m;
		
		
		for ( int i = 0; i<n; i++){
			
			
			for (int j = 0 ; j<4; j++ ){
				
				
				if ((j+i)%m==0){
					cout << " X ";
				}
				else if ((j+i)%m!=0){
					cout << " O ";
				}
				
			}
			cout << endl;
			
		}
		
		   return 0;
	}
