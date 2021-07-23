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

int main ()
{
	string username, pass;
	string data_user = "admin", data_pass = "ayamgoyeng";
	
	//LOGIN
	cout << "Username = "; cin >> username;
	cout << "Password = "; cin >> pass;
	
	//CHECKING..
	if(username == data_user){
		if(pass == data_pass){
			cout << "\nBerhasil Login";
			return true;
		}
	}
	
	cout << "\n ~~> Username/Password salah. SIlahkan coba lagi!\n";
	main();
	
	return false;
}

