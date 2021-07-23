/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: LP3_120140141_
Tanggal		: 14 November 2020
Deskripsi	:
============================================
*/

#include<iostream>
using namespace std;
int main(){
	system("cls");
	int integer,n;
	long factorial = 1;
	
	cout << "Put an Integer = "; cin >> n;

	int c =n;
	cout<<c<<"! = ";
	while(c >= 1){
		factorial *= c;
		if(c != 1){
			cout<<c<<" x ";
	} else{
			cout<<c<<" = ";
		}c--;
	}
	cout<<factorial;
}


