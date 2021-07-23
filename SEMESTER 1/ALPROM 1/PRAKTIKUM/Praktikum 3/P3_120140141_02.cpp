/*
============================================
NIM/Nama	: 120140141/Bilhaq Avi Dewantara
Nama file	: LP3_120140141_Fw
Tanggal		: 14 November 2020
Deskripsi	: Program Forbidden Word
============================================
*/

#include <iostream>
using namespace std;

int main ()
{
	string w;
	
	cin >> w;
	
	while(w!="anjay" && w!= "selesai"){
		cin >>w;
	}
	if(w=="selesai"){
		cout << "Anda tidak mengucapkan kata terlarang";
	}else if (w=="anjay"){
		cout << "Anda mengucapkan kata terlarang";	
	}
	return 0;
}

