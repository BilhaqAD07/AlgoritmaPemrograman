/*
Nama	: Bilhaq Avi Dewantara
NIM		: 120140141
TPB		: 52
Prodi	: Teknik Informatika
*/

#include <iostream>
using namespace std;

int main()
// 
{
	int x;
	int n=0;
	
	cout << "\t\t************************************\n";
	cout << "\t\tPROGRAM PENGULANGAN BILANGAN NEGATIF\n";
	cout << "\t\t************************************\n\n";
	
	
	// Command Input Angka Negatif
	cout <<"Berhenti di bilangan ke~> ";
	cin >> x;
	
	cout << "\n\t__________STARTING__________\n\n";
	
	// Pengulangan
	while (n != x)
	{
		cout << "Angka  " << n << endl;
	}
	cout << "\n\t_____________END____________\n";
	
	return false; 
}
