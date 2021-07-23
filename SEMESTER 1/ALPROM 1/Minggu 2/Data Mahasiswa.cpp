/*
LATIHAN 1 Data Mahasiswa
Nama	: Bilhaq Avi Dewantara
NIM		: 120140141
Prodi	: Teknik Informatika
*/


#include <iostream>
using namespace std;

// Program Input Data Mahasiswa

int main()
{
		float IP;
		string Goldar;
		char Nama[50];
		int NIM;
		
		// Input Data
		cout<<"Data Mahasiswa"<< endl;
		cout<<"Input NIM ->		 "; cin >> NIM;
		cout<<"Input Nama Mahasiswa ->	 "; cin.ignore(256,'\n'); cin.getline(Nama, 50);
		cout<<"Input Golongan Darah ->	 "; cin >>Goldar;
		cout<<"Input IP ->		 "; cin >>IP;
		
		// Hasil
		cout<<"\nData Mahasiswa";
		cout<<"\nNIM			:"<< NIM;
		cout<<"\nNama			:"<< Nama;
		cout<<"\nGolongan Darah		:"<< Goldar;
		cout<<"\nIP			:"<< IP;
		
		char c;
		std::cin >> c;
		return 0;
				
}
