// NIM/NAMA : Faisal Khairul Fasha
// Nama file :
// Tanggal :  November 2020
// Deskripsi :

#include <iostream>
using namespace std;

string nama[100];
string jenis[100];
string umur[100];
string pend[100];
string ttl[100];
string alamat[100];
int anak[100];
string status[100];
int jam[100];
string jabatan;
string ya;
int tanak;
int tistri;
int blembur;
int tunjangan;
int gpokok;
int bulan;
int tahun;

int main ()
{
	for (int i = 1; i <= 3; i++) {
		cout << "Data Karyawan " << i; cout << endl;
		cout << "Nama = "; getline(cin, nama[i]);
		cout << "Jenis Kelamin = "; getline(cin, jenis[i]);
		cout << "Umur = "; getline(cin, umur[i]);
		cout << "Pendidikan Terakhir = "; getline(cin, pend[i]);
		cout << "TTL = "; getline(cin, ttl[i]);
		cout << "Alamat = "; getline(cin, alamat[i]);
		cout << "Jumlah Anak = "; cin >> anak[i];
		cout << "Status Perkawinan (kawin/belum) = "; cin >> status[i];
		cout << "Jam Lembur = "; cin >> jam[i];
		cout << " "; getline(cin, ya);
		cout << endl;
	}
		cout << endl;
		
	for (int i = 1; i <= 3; i++) {
		if (umur[i] < "25") {
			jabatan = "Junior Office Officer";
			gpokok = 1800000;
		} else {
			jabatan = "Senior Officer";
			gpokok = 2500000;
		}	
		if (anak[i] > 0 && anak[i] <= 5) {
			tanak = anak[i] * 200000;
	}
	if (status[i] == "kawin") {
		tistri = 500000;
	} else {
		tistri = 0;
	}
	if (jam[i] > 0 && jam[i] <= 50) {
		blembur = jam[i] * 50000;
	}
	
	cout << "Data Karyawan " << i; cout << endl;
	cout << "Nama = " << nama[i] << endl;
	cout << "Jenis Kelamin = " << jenis[i] << endl;
	cout << "Umur = " << umur[i] << endl;
	cout << "Pendidikan Terakhir = " << pend[i] << endl;
	cout << "Tempat Tanggal Lahir = " << ttl[i] << endl;
	cout << "Alamat = " << alamat[i] << endl;
	cout << "Jumlah Anak = " << anak[i] << endl;
	cout << "Status Perkawinan = " << status[i] << endl;
	cout << "Jabatan = " << jabatan; cout << endl;
	cout << "Gaji Pokok = " << gpokok; cout << endl;
	cout << "Lama Lembur = " << jam[i] << "Jam"; cout << endl;
	tunjangan = tanak + tistri;
	cout << "Total Tunjangan = " << tunjangan; cout << endl;
	cout << "Bonus Lembur = " << blembur; cout << endl;
	bulan = gpokok + tunjangan + blembur;
	tahun = bulan * 12;
	cout << "Total Gaji 1 Bulan = " << bulan; cout << endl;
	cout << "Total Gaji 1 Tahun = " << tahun; cout << endl;
	cout << endl;
}

return 0;
}

