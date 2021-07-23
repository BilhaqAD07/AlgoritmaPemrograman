// NIM/Nama		: Bilhaq Avi Dewantara
// Nama file	: TP1_<120140141>_01.cpp
// Tanggal		: 06 November 2020
// Deskripsi	: Tugas 1


#include <iostream>
using namespace std;

main(){
	string nama = "qwerty";
	string nim = "12345";
	string username, password;
	
	cout << "\nInput Username = ";
	cin >> username;
	cout << "Input Password = "; 
	cin >> password;
	
	//Login
	if (username == nama)
	{
		if (password == nim)
		{
	
		cout << "\nBerhasil Login\n";
		return true;
		}
	}
	
	cout << "\n ---> Login Gagal. Silahkan mencoba kembali.\n";
	main();
}

