/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: P3_120140141_Anh
Tanggal		: 14 November 2020
Deskripsi	: Problem Aneh
============================================
*/

#include <iostream>
using namespace std;

int main()
{
	int n,m;
	
	cin>> n;
	cin>> m;
	
	for(int i=0;i<n;i++){
		if(i%m == 0)
			cout << i;
	}
	cout << endl;
	
	return 0;
}

