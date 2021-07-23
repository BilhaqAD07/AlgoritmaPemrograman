#include <iostream>	// Library
using namespace std;

int main(){
	// Kamus 
	int input;
	
	// Algoritma
	cout << "Pilih Warna" << endl;
	cout << "1. Biru" << endl;
	cout << "2. Hujau" << endl;
	cout << "3. Kuning" << endl;
	cout <<	"4. Putih" << endl;
	cout <<	"5. Merah" << endl;
	cout << "Pilih Warna yang Kamu Sukai : "; cin >> input;
	
	cout <<"\n";
	
	switch (input){
		case 1	: cout << "Biru melambangkan kelembatan"; break;
		case 2	: cout << "Hijau melambangkan keseimbangan"; break;
		case 3	: cout << "Kuning melambangkan kebijaksanaan"; break;
		case 4	: cout << "Putih melambangkan kesucian"; break;
		case 5	: cout << "Merah melambangkan keberanian"; break;
		default	: cout << "Nomor yang dimasukkan salah. Silahkan ulangi kembali";
	}
	
	return 0;
}
