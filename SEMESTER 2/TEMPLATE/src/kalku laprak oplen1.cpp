#include <iostream>
#include <math.h>
#include <iomanip>


using namespace std;

// DEKLARASI

int main()
{
	char pilih;
	float x, y, z, p, q, rata, deviasi, teliti;
	
	do{
		
		cout << "\t    *******************************" << endl;
		cout << "\t    *          CREDIT             *" << endl;
		cout << "\t    *   Created by : GearDraxx    *" << endl;
		cout << "\t    *    Contribute : Ranzel      *" << endl;
		cout << "\t    *******************************" << endl;
	
		cout << "\t\t-----------------------\n";
		cout << "\t\tPROGRAM PEMBANTU LAPRAK\n";
		cout << "\t\t-----------------------\n\n";
		
		cout << "Perhitungan Rata-Rata"<< endl;
		cout << "Masukkan x1 = "; cin >> x;
		cout << "Masukkan x2 = "; cin >> y;
		cout << "Masukkan x3 = "; cin >> z; 
		cout << "Masukkan x4 = "; cin >> p; 
		cout << "Masukkan x5 = "; cin >> q;
		
		cout << "\n===================\n";
		cout << "Meghitung Rata-Rata";
		rata = (x + y + z + p + q) / 5;
		printf("\nRata-Rata = %4.2f" , rata);
		cout << "\n===================\n\n";
		
		cout << "\n==========================\n";
		cout << "Menghitung Standar Deviasi" << endl;
		deviasi = sqrt(((x-rata)*(x-rata)+(y-rata)*(y-rata)+(z-rata)*(z-rata)+(p-rata)*(p-rata)+(q-rata)*(q-rata))/20); 
		printf("Standar Deviasi = %4.3f" , deviasi);
		cout << "\n==========================\n\n";
		
		cout << "=====================\n";
		cout << "Menghitung Ketelitian";
		teliti = (1-(deviasi/rata))*100;
		printf("\nKetelitian = %4.2f" ,teliti);
		cout << " %";
		cout << "\n=====================\n\n";

		cout << "\t\t-------------------\n";
		cout << "\t\tSELAMAT MENGERJAKAN\n";
		cout << "\t\t-------------------\n\n";
				
		cout << "Lanjutkan Perhitungan? (Y/N) = ";
		cin >>pilih;
		system("pause");
		system("cls");
		
	}while (pilih=='Y' || pilih=='y');
	return 0;
}