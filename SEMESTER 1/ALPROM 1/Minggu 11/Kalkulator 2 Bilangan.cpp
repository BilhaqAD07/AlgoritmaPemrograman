/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: LP4_120140141_
Tanggal		: 18 November 2020
Deskripsi	:
============================================
*/

#include <iostream>
using namespace std;

int kalkulator(int a, int b, char c)
{
	if (c=='+'){
		int hasil;
		hasil = a+b;
		return hasil;
	}
	
	if (c=='-'){
		int hasil;
		hasil = a-b;
		return hasil;
	}
	
	if (c=='*'){
		int hasil;
		hasil = a*b;
		return hasil;
	}
	
	if(c=='/'){
		int hasil;
		hasil = a/b;
		return hasil;
	}
	return 0;
}
int main(){
	int x,y;
	char n;
	
	cout << "Masukkan operasi bilangan yang akan dilakukan (+ - * /) = "; 
	cin >> n;
	cout << "Masukkan Bilangan Pertama = "; 
	cin >> y;
	cout << "Masukkan Bilangan Kedua   = "; 
	cin >> x;
	cout << endl;
	cout << "Hasil Operasi Bilangan	  = " << kalkulator(y,x,n);
	
	return 0;
}

