/* ==============================================
   NIM/Nama 	= 120140130 / Hilmanda Panji Orienski
   Nama File 	= Cvd_120140130.cpp
   Tanggal		= 11-11-2020
   Deskripsi 	= Covid-19 Zone Problem
   ==============================================*/

#include <iostream>

using namespace std;

int main()
{
	int zone;
	
	cin>>zone;
	
	if(zone>10){
		cout<<"Zona Merah";
	}else if(zone>0){
		cout<<"Zona Kuning";
	}else{
		cout<<"Zona Hijau";
	}
	return 0;
}
