#include <iostream>
using namespace std;

int main () {
	int N, pilih;

	string hitung;
	
	do{
		cout << "PROGRAM MENGHITUNG ENERGI KINETIK DAN ENERGI POTENSIAL" << endl;
		cout << "1. Energi Kinetik" << endl;
		cout << "2. Energi Potensial" << endl;
		cout << "Pilih yang akan anda cari : ";
		cin >> pilih;
		cout << "Masukkan banyaknya perhitungan : ";
		cin >> N;
		cout << endl;
		float m[N], v[N], g[N], h[N], hasil=0;
		if (pilih == 1) {
			for (int i=0; i<N; i++) {
				cout << "Perhitungan ke-" << i+1 << endl;
				cout << "Masukkan nilai massa (m) : ";
				cin >> m[i];
				cout << "Masukkan nilai kecepatan (v) : ";
				cin >> v[i];
				hasil=0.5*m[i]*(v[i]*v[i]);
				cout << "Energi Kinetik = " << hasil << " Joule" << endl;
				cout << endl;
			}
		}
		
		else if (pilih == 2) {
			for (int i=0; i<N; i++) {
				cout << "Perhitungan ke-"<< i+1 << endl;
				cout << "Masukkan nilai massa (m) : ";
				cin >> m[i];
				cout << "Masukkan nilai percepatan gravitasi (g) : ";
				cin >> g[i];
				cout << "Masukkan nilai tinggi benda (h) : ";
				cin >> h[i];
				hasil=m[i]*g[i]*h[i];
				cout << "Energi Potensial = " << hasil << " Joule" << endl;
				cout << endl;
			}
		}
		else{
			cout << "Pilihan anda tidak ada dalam daftar" << endl;
		}
		
		cout << "Ingin menghitung ulang? (y/n) : ";
		cin >> hitung;
		cout << endl;
	} while (hitung == "y" || hitung == "Y");
		
	
}
