/* ==============================================
   NIM/Nama 	= 120140130 / Hilmanda Panji Orienski
   Nama File 	= Temp_120140130.cpp
   Tanggal		= 11-11-2020
   Deskripsi 	= Temperature scale problem
   ==============================================*/

#include <iostream>

using namespace std;

int main()
{
	char konversi;
	float C,F,R,K;
	
	cin>>C;
	
	F=((9.0/5.0)*C)+32;
	R=(4.0/5.0)*C;
	K=C+273;
	
	cin>>konversi;
	switch(konversi){
		case 'F':
			cout<<F;
			break;
		case 'R':
			cout<<R;
			break;
		case 'K':
			cout<<K;
			break;
		default:
			cout<<"Tidak ada Konversi";
	}
	


	return 0;
}

