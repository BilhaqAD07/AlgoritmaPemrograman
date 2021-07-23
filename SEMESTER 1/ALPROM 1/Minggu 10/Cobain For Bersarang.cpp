/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: P4_120140141_
Tanggal		: 18 November 2020
Deskripsi	:
============================================
*/

#include <iostream>
using namespace std;

int main ()
{
	system("cls");
	int n;
	
	cout << "Put an integer = ";
	cin >> n;
	for (int i=1; i<=n;i++){
		for(int j=1; j<=i;j++){
			cout << i*j << ' ';
		}
		cout << endl;
	}
}

