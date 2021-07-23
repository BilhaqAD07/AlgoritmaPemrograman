/* ==============================================
   NIM/Nama 	= 120140130 / Hilmanda Panji Orienski
   Nama File 	= Grd_120140130.cpp
   Tanggal		= 11-11-2020
   Deskripsi 	= Graduated Problem
   ==============================================*/

#include <iostream>

using namespace std;

int main()
{
	string nama;
	int nim;
	float ipk;
	
	getline(cin,nama);
	cin>>nim;
	cin>>ipk;
	
	cout<<"Nama anda "<<nama<<" dengan NIM "<<nim<< " lulus dengan IPK "<<ipk<<endl;
	return 0;
}
