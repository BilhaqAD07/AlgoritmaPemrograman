
/*
MACAM-MACAM OPERATOR HITUNGAN LOGIKA
!=	// Tidak sama dengan
==	// Harus sama dengan
&&	// a>4 && b<4 (itu program tidak akan TRUE bila salah satu tidak memenuhi aturan tersebut)
||	// a>4 || b<4 (itu program akan berhenti diantara kedua bilangan tersebut)
>=	// Lebih dari sama dengan
<=	// Kurang dari sama dengan
*	// Dikali
/	// Dibagi
%	// Modul
+	// Ditambah
-	// Dikurang
*/

/* 
Nama	: Bilhaq Avi Dewantara
NIM		: 120140141
Prodi	: Teknik Informatika
TPB		: 52
*/




#include <iostream>
using namespace std;

int main()
{
	int x, hasil;

	cout << "Masukkan Angka -> "; cin >> x;
	hasil = x%2;
	
	cout << endl;
	
	if(hasil =0)
	{
		cout << x <<" Angka Bilangan Genap";
	}else{
		cout << x <<" Angka Bilangan Ganjil";
	}
	
	return 0;
	system("cls");
}
