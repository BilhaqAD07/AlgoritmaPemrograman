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
	int a,b;
	
	cout << "Input an Integer = "; cin >> a;
	for (int i=1;i<=a;i++){
		for(int b=1;b<=i;b++){
			cout << i*b << ' ';
		}
		cout << endl;
	}
	
}

